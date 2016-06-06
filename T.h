//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Mar 17 15:48:10 2016 by ROOT version 6.06/00
// from TTree T/phase-space variables
// found on file: X5568BsJpsiPhi_test.root
//////////////////////////////////////////////////////////

#ifndef T_h
#define T_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class T {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           XId;
   Double_t        XPt;
   Double_t        XPx;
   Double_t        XPy;
   Double_t        XPz;
   Double_t        XMass;
   Double_t        XEta;
   Double_t        XPhi;
   Double_t        XVx;
   Double_t        XVy;
   Double_t        XVz;
   Double_t        Xdl;
   Double_t        Xdl3D;
   Int_t           PiId;
   Double_t        PiPt;
   Double_t        PiPx;
   Double_t        PiPy;
   Double_t        PiPz;
   Double_t        PiMass;
   Double_t        PiEta;
   Double_t        PiPhi;
   Int_t           BsId;
   Double_t        BsPt;
   Double_t        BsPx;
   Double_t        BsPy;
   Double_t        BsPz;
   Double_t        BsMass;
   Double_t        BsEta;
   Double_t        BsPhi;
   Double_t        BsVx;
   Double_t        BsVy;
   Double_t        BsVz;
   Double_t        Bsdl;
   Double_t        Bsdl3D;
   Int_t           MuPId;
   Double_t        MuPPt;
   Double_t        MuPPx;
   Double_t        MuPPy;
   Double_t        MuPPz;
   Double_t        MuPMass;
   Double_t        MuPEta;
   Double_t        MuPPhi;
   Int_t           MuNId;
   Double_t        MuNPt;
   Double_t        MuNPx;
   Double_t        MuNPy;
   Double_t        MuNPz;
   Double_t        MuNMass;
   Double_t        MuNEta;
   Double_t        MuNPhi;
   Int_t           Npho;
   Int_t           JId;
   Double_t        JPt;
   Double_t        JPx;
   Double_t        JPy;
   Double_t        JPz;
   Double_t        JMass;
   Double_t        JEta;
   Double_t        JPhi;
   Double_t        JVx;
   Double_t        JVy;
   Double_t        JVz;
   Int_t           PhiId;
   Double_t        PhiPt;
   Double_t        PhiPx;
   Double_t        PhiPy;
   Double_t        PhiPz;
   Double_t        PhiMass;
   Double_t        PhiEta;
   Double_t        PhiPhi;
   Double_t        PhiVx;
   Double_t        PhiVy;
   Double_t        PhiVz;
   Int_t           KPId;
   Double_t        KPPt;
   Double_t        KPPx;
   Double_t        KPPy;
   Double_t        KPPz;
   Double_t        KPMass;
   Double_t        KPEta;
   Double_t        KPPhi;
   Int_t           KNId;
   Double_t        KNPt;
   Double_t        KNPx;
   Double_t        KNPy;
   Double_t        KNPz;
   Double_t        KNMass;
   Double_t        KNEta;
   Double_t        KNPhi;
   UInt_t          nVtx;
   Int_t           run;
   Int_t           evt;

   // List of branches
   TBranch        *b_XId;   //!
   TBranch        *b_XPt;   //!
   TBranch        *b_XPx;   //!
   TBranch        *b_XPy;   //!
   TBranch        *b_XPz;   //!
   TBranch        *b_XMass;   //!
   TBranch        *b_XEta;   //!
   TBranch        *b_XPhi;   //!
   TBranch        *b_XVx;   //!
   TBranch        *b_XVy;   //!
   TBranch        *b_XVz;   //!
   TBranch        *b_Xdl;   //!
   TBranch        *b_Xdl3D;   //!
   TBranch        *b_PiId;   //!
   TBranch        *b_PiPt;   //!
   TBranch        *b_PiPx;   //!
   TBranch        *b_PiPy;   //!
   TBranch        *b_PiPz;   //!
   TBranch        *b_PiMass;   //!
   TBranch        *b_PiEta;   //!
   TBranch        *b_PiPhi;   //!
   TBranch        *b_BsId;   //!
   TBranch        *b_BsPt;   //!
   TBranch        *b_BsPx;   //!
   TBranch        *b_BsPy;   //!
   TBranch        *b_BsPz;   //!
   TBranch        *b_BsMass;   //!
   TBranch        *b_BsEta;   //!
   TBranch        *b_BsPhi;   //!
   TBranch        *b_BsVx;   //!
   TBranch        *b_BsVy;   //!
   TBranch        *b_BsVz;   //!
   TBranch        *b_Bsdl;   //!
   TBranch        *b_Bsdl3D;   //!
   TBranch        *b_MuPId;   //!
   TBranch        *b_MuPPt;   //!
   TBranch        *b_MuPPx;   //!
   TBranch        *b_MuPPy;   //!
   TBranch        *b_MuPPz;   //!
   TBranch        *b_MuPMass;   //!
   TBranch        *b_MuPEta;   //!
   TBranch        *b_MuPPhi;   //!
   TBranch        *b_MuNId;   //!
   TBranch        *b_MuNPt;   //!
   TBranch        *b_MuNPx;   //!
   TBranch        *b_MuNPy;   //!
   TBranch        *b_MuNPz;   //!
   TBranch        *b_MuNMass;   //!
   TBranch        *b_MuNEta;   //!
   TBranch        *b_MuNPhi;   //!
   TBranch        *b_Npho;   //!
   TBranch        *b_JId;   //!
   TBranch        *b_JPt;   //!
   TBranch        *b_JPx;   //!
   TBranch        *b_JPy;   //!
   TBranch        *b_JPz;   //!
   TBranch        *b_JMass;   //!
   TBranch        *b_JEta;   //!
   TBranch        *b_JPhi;   //!
   TBranch        *b_JVx;   //!
   TBranch        *b_JVy;   //!
   TBranch        *b_JVz;   //!
   TBranch        *b_PhiId;   //!
   TBranch        *b_PhiPt;   //!
   TBranch        *b_PhiPx;   //!
   TBranch        *b_PhiPy;   //!
   TBranch        *b_PhiPz;   //!
   TBranch        *b_PhiMass;   //!
   TBranch        *b_PhiEta;   //!
   TBranch        *b_PhiPhi;   //!
   TBranch        *b_PhiVx;   //!
   TBranch        *b_PhiVy;   //!
   TBranch        *b_PhiVz;   //!
   TBranch        *b_KPId;   //!
   TBranch        *b_KPPt;   //!
   TBranch        *b_KPPx;   //!
   TBranch        *b_KPPy;   //!
   TBranch        *b_KPPz;   //!
   TBranch        *b_KPMass;   //!
   TBranch        *b_KPEta;   //!
   TBranch        *b_KPPhi;   //!
   TBranch        *b_KNId;   //!
   TBranch        *b_KNPt;   //!
   TBranch        *b_KNPx;   //!
   TBranch        *b_KNPy;   //!
   TBranch        *b_KNPz;   //!
   TBranch        *b_KNMass;   //!
   TBranch        *b_KNEta;   //!
   TBranch        *b_KNPhi;   //!
   TBranch        *b_nVtx;   //!
   TBranch        *b_run;   //!
   TBranch        *b_evt;   //!

   T(TTree *tree=0);
   virtual ~T();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef T_cxx
T::T(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("X5568BsJpsiPhi_test.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("X5568BsJpsiPhi_test.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("X5568BsJpsiPhi_test.root:/Test");
      dir->GetObject("T",tree);

   }
   Init(tree);
}

T::~T()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t T::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t T::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void T::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("XId", &XId, &b_XId);
   fChain->SetBranchAddress("XPt", &XPt, &b_XPt);
   fChain->SetBranchAddress("XPx", &XPx, &b_XPx);
   fChain->SetBranchAddress("XPy", &XPy, &b_XPy);
   fChain->SetBranchAddress("XPz", &XPz, &b_XPz);
   fChain->SetBranchAddress("XMass", &XMass, &b_XMass);
   fChain->SetBranchAddress("XEta", &XEta, &b_XEta);
   fChain->SetBranchAddress("XPhi", &XPhi, &b_XPhi);
   fChain->SetBranchAddress("XVx", &XVx, &b_XVx);
   fChain->SetBranchAddress("XVy", &XVy, &b_XVy);
   fChain->SetBranchAddress("XVz", &XVz, &b_XVz);
   fChain->SetBranchAddress("Xdl", &Xdl, &b_Xdl);
   fChain->SetBranchAddress("Xdl3D", &Xdl3D, &b_Xdl3D);
   fChain->SetBranchAddress("PiId", &PiId, &b_PiId);
   fChain->SetBranchAddress("PiPt", &PiPt, &b_PiPt);
   fChain->SetBranchAddress("PiPx", &PiPx, &b_PiPx);
   fChain->SetBranchAddress("PiPy", &PiPy, &b_PiPy);
   fChain->SetBranchAddress("PiPz", &PiPz, &b_PiPz);
   fChain->SetBranchAddress("PiMass", &PiMass, &b_PiMass);
   fChain->SetBranchAddress("PiEta", &PiEta, &b_PiEta);
   fChain->SetBranchAddress("PiPhi", &PiPhi, &b_PiPhi);
   fChain->SetBranchAddress("BsId", &BsId, &b_BsId);
   fChain->SetBranchAddress("BsPt", &BsPt, &b_BsPt);
   fChain->SetBranchAddress("BsPx", &BsPx, &b_BsPx);
   fChain->SetBranchAddress("BsPy", &BsPy, &b_BsPy);
   fChain->SetBranchAddress("BsPz", &BsPz, &b_BsPz);
   fChain->SetBranchAddress("BsMass", &BsMass, &b_BsMass);
   fChain->SetBranchAddress("BsEta", &BsEta, &b_BsEta);
   fChain->SetBranchAddress("BsPhi", &BsPhi, &b_BsPhi);
   fChain->SetBranchAddress("BsVx", &BsVx, &b_BsVx);
   fChain->SetBranchAddress("BsVy", &BsVy, &b_BsVy);
   fChain->SetBranchAddress("BsVz", &BsVz, &b_BsVz);
   fChain->SetBranchAddress("Bsdl", &Bsdl, &b_Bsdl);
   fChain->SetBranchAddress("Bsdl3D", &Bsdl3D, &b_Bsdl3D);
   fChain->SetBranchAddress("MuPId", &MuPId, &b_MuPId);
   fChain->SetBranchAddress("MuPPt", &MuPPt, &b_MuPPt);
   fChain->SetBranchAddress("MuPPx", &MuPPx, &b_MuPPx);
   fChain->SetBranchAddress("MuPPy", &MuPPy, &b_MuPPy);
   fChain->SetBranchAddress("MuPPz", &MuPPz, &b_MuPPz);
   fChain->SetBranchAddress("MuPMass", &MuPMass, &b_MuPMass);
   fChain->SetBranchAddress("MuPEta", &MuPEta, &b_MuPEta);
   fChain->SetBranchAddress("MuPPhi", &MuPPhi, &b_MuPPhi);
   fChain->SetBranchAddress("MuNId", &MuNId, &b_MuNId);
   fChain->SetBranchAddress("MuNPt", &MuNPt, &b_MuNPt);
   fChain->SetBranchAddress("MuNPx", &MuNPx, &b_MuNPx);
   fChain->SetBranchAddress("MuNPy", &MuNPy, &b_MuNPy);
   fChain->SetBranchAddress("MuNPz", &MuNPz, &b_MuNPz);
   fChain->SetBranchAddress("MuNMass", &MuNMass, &b_MuNMass);
   fChain->SetBranchAddress("MuNEta", &MuNEta, &b_MuNEta);
   fChain->SetBranchAddress("MuNPhi", &MuNPhi, &b_MuNPhi);
   fChain->SetBranchAddress("Npho", &Npho, &b_Npho);
   fChain->SetBranchAddress("JId", &JId, &b_JId);
   fChain->SetBranchAddress("JPt", &JPt, &b_JPt);
   fChain->SetBranchAddress("JPx", &JPx, &b_JPx);
   fChain->SetBranchAddress("JPy", &JPy, &b_JPy);
   fChain->SetBranchAddress("JPz", &JPz, &b_JPz);
   fChain->SetBranchAddress("JMass", &JMass, &b_JMass);
   fChain->SetBranchAddress("JEta", &JEta, &b_JEta);
   fChain->SetBranchAddress("JPhi", &JPhi, &b_JPhi);
   fChain->SetBranchAddress("JVx", &JVx, &b_JVx);
   fChain->SetBranchAddress("JVy", &JVy, &b_JVy);
   fChain->SetBranchAddress("JVz", &JVz, &b_JVz);
   fChain->SetBranchAddress("PhiId", &PhiId, &b_PhiId);
   fChain->SetBranchAddress("PhiPt", &PhiPt, &b_PhiPt);
   fChain->SetBranchAddress("PhiPx", &PhiPx, &b_PhiPx);
   fChain->SetBranchAddress("PhiPy", &PhiPy, &b_PhiPy);
   fChain->SetBranchAddress("PhiPz", &PhiPz, &b_PhiPz);
   fChain->SetBranchAddress("PhiMass", &PhiMass, &b_PhiMass);
   fChain->SetBranchAddress("PhiEta", &PhiEta, &b_PhiEta);
   fChain->SetBranchAddress("PhiPhi", &PhiPhi, &b_PhiPhi);
   fChain->SetBranchAddress("PhiVx", &PhiVx, &b_PhiVx);
   fChain->SetBranchAddress("PhiVy", &PhiVy, &b_PhiVy);
   fChain->SetBranchAddress("PhiVz", &PhiVz, &b_PhiVz);
   fChain->SetBranchAddress("KPId", &KPId, &b_KPId);
   fChain->SetBranchAddress("KPPt", &KPPt, &b_KPPt);
   fChain->SetBranchAddress("KPPx", &KPPx, &b_KPPx);
   fChain->SetBranchAddress("KPPy", &KPPy, &b_KPPy);
   fChain->SetBranchAddress("KPPz", &KPPz, &b_KPPz);
   fChain->SetBranchAddress("KPMass", &KPMass, &b_KPMass);
   fChain->SetBranchAddress("KPEta", &KPEta, &b_KPEta);
   fChain->SetBranchAddress("KPPhi", &KPPhi, &b_KPPhi);
   fChain->SetBranchAddress("KNId", &KNId, &b_KNId);
   fChain->SetBranchAddress("KNPt", &KNPt, &b_KNPt);
   fChain->SetBranchAddress("KNPx", &KNPx, &b_KNPx);
   fChain->SetBranchAddress("KNPy", &KNPy, &b_KNPy);
   fChain->SetBranchAddress("KNPz", &KNPz, &b_KNPz);
   fChain->SetBranchAddress("KNMass", &KNMass, &b_KNMass);
   fChain->SetBranchAddress("KNEta", &KNEta, &b_KNEta);
   fChain->SetBranchAddress("KNPhi", &KNPhi, &b_KNPhi);
   fChain->SetBranchAddress("nVtx", &nVtx, &b_nVtx);
   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("evt", &evt, &b_evt);
   Notify();
}

Bool_t T::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void T::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t T::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef T_cxx
