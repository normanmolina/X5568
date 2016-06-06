//////////////////////////////////////////////////////////////////////////
//
// 'BASIC FUNCTIONALITY' RooFit tutorial macro #101
//
// Fitting, plotting, toy data generation on one-dimensional p.d.f
//
// pdf = gauss(x,m,s)
//
//
// 07/2008 - Wouter Verkerke
//
/////////////////////////////////////////////////////////////////////////

#ifndef __CINT__
#include "RooGlobalFunc.h"
#endif
#include "RooRealVar.h"
#include "RooDataSet.h"
#include "RooGaussian.h"
#include "RooVoigtian.h"
#include "TCanvas.h"
#include "RooPlot.h"
#include "TAxis.h"
#include "T.C"
using namespace RooFit ;


void fitmass()
{
  // S e t u p   m o d e l
  // ---------------------

    TChain *ch = new TChain("T","");

    ch->Add("X5568BsJpsiPhi_Gen3_part1.root/Test/T");
    ch->Add("X5568BsJpsiPhi_Gen3_part2.root/Test/T");


    TTree *tree = (TTree*)ch;
    T t(tree);
    Int_t nen = t.fChain->GetEntries();
    cout << nen << endl;

    RooRealVar x("x","m(B_{s}^{0} #pi^{#pm})",5.367+0.140,5.367+0.140+0.25,"GeV") ;//5.51,5.7
    RooDataSet data("data","data",RooArgSet(x));

    Int_t nby=0, nb =0;
    for (int i=0; i<nen; i++){
        Int_t j = t.LoadTree(i);
        if (j < 0) break;
        nb = t.fChain->GetEntry(i); nby+=nb;
        if(t.XMass < x.getMin() || t.XMass > x.getMax()) continue;
        x=t.XMass;
        //cout <<t.XMass<<endl;
        data.add(RooArgSet(x));

    }
    data.Print("v");

  // Declare variables x,mean,sigma with associated name, title, initial value and allowed range
   RooRealVar mean("mean","mean of Voigtian",5.568,5.5,6.0) ;
   RooRealVar sigma("sigma","sigma of Voigtian",0.) ;
    RooRealVar width("width","width of Voigtian",0.02,0.0001,1) ;

//    RooPolynomial pol("pol","pol",)

  // Build gaussian p.d.f in terms of x,mean and sigma
   // RooGaussian gauss("gauss","gaussian PDF",x,mean,sigma) ;
    RooBreitWigner voig("voig", "voig PDF", x, mean, width);


  // Generate a dataset of 1000 events in x from gauss
  //RooDataSet* data = voig.generate(x,10000) ;

 //   width.setVal(0.0219);
 //   width.setConstant();
  voig.fitTo(data) ;


  // Make a second plot frame in x and draw both the
  // data and the p.d.f in the frame
  RooPlot* xframe2 = x.frame() ;//Title("m(B_{s}^{0} #pi^{#pm})")
  data.plotOn(xframe2) ;
  voig.plotOn(xframe2) ;
  //  voig.paramOn(xframe2,Layout(0.7,0.95,0.95));

    TPaveText *pt = new TPaveText(0.5,0.54,0.75,0.63,"NDC");//es la posicion de la tabla de texto Simulation
    //pt->AddText(Form("(%s)    D\330, 10.4 fb^{-1}",_islb?"a":"b"));// #oslash
    //pt->AddText(Form("     (%s)                             ",name=="hmlbp2"?"a":"b"));// #oslash
       //pt->AddText("^{}");
    //pt->AddText("^{}");
    pt->AddText(" Simulation");// #oslash
    pt->SetBorderSize(0);                                     //no borders
    pt->SetFillColor(0);                                      //white interior
    pt->SetTextSize(0.06);
    pt->SetTextFont(42);
    xframe2->addObject(pt);

    //TPaveText *tbox = new TPaveText(0.38,0.9,0.62,0.96,"BRNDC");
    TPaveText *tbox = new TPaveText(0.7,0.9,0.95,0.75,"BRNDC");
    //tbox->AddText(Form("#chi^{2}/ndf = %5.2f",chi2_m ) );
    tbox->AddText(Form("#mu = %2.5f #pm %2.5f",mean.getVal(),mean.getError() ) );
    //2.5f es valor flotante con 5 cifras significativas y hasta decenas
    tbox->AddText(Form("#Gamma = %2.5f #pm %2.5f",width.getVal(),width.getError() ) );
    tbox->SetFillColor(0);
    tbox->SetTextColor(1);
    tbox->SetTextSize(0.05);
    tbox->SetTextFont(42);
    tbox->SetBorderSize(1);
    xframe2->addObject(tbox);


  // Draw all frames on a canvas
    TCanvas* c = new TCanvas("rf101_basics","rf101_basics",800,400) ;
    c->cd() ;
    gStyle->SetOptStat(0);
    c->Range(-0.145412,-2.66,0.318663,4.204);
    c->SetFillColor(0);
    c->SetBorderMode(0);
    c->SetBorderSize(1);//
    c->SetLeftMargin(0.08);
    c->SetRightMargin(0.04);
    c->SetTopMargin(0.0297203);
    c->SetBottomMargin(0.12);
    c->SetFrameBorderMode(0);
    c->SetFrameBorderMode(0);

    xframe2->SetXTitle("m(B_{s}^{0} #pi^{#pm}) [GeV]");
    //xframe2->SetYTitle("Events");
    xframe2->SetTitle("");
    xframe2->SetLabelSize(0.05,"XY");
    xframe2->SetTitleSize(0.05,"XY");
    xframe2->SetLabelFont(42,"XY");
    xframe2->SetTitleFont(42,"XY");
    //xframe2->SetTitleOffset(1,"x"); //1 offset down
    xframe2->SetTitleOffset(0.7,"y");


    xframe2->Draw() ;

    c->Print("XMass_BWfit.png");

}
