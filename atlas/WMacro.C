{

Wenu w;
w.SetQCDScaleFactor(0.27);
// w.SetQCDScaleFactor(0.31);
// w.SetCutSelection("ptw < 10.");
// w.SetCutSelection("njet == 0 && ptw < 10.");
w.SetCutSelection("njet == 0 && el_etiso < 10");

// w.SetCutSelection("el_etiso < 6. && njet == 0");

// double xmin = 28.;
// double xmax = 60.;

double xmin = 27.;
double xmax = 55.;

TCanvas* c1 = new TCanvas("c1");
c1->Clear();
c1->Divide(4,2);
c1->cd(1);w.GetHalfMaximum("MCW75",xmin,xmax);
c1->cd(2);w.GetHalfMaximum("MCW78",xmin,xmax);
c1->cd(3);w.GetHalfMaximum("MCW79",xmin,xmax);
c1->cd(4);w.GetHalfMaximum("MCW80",xmin,xmax);
c1->cd(5);w.GetHalfMaximum("MCW81",xmin,xmax);
c1->cd(6);w.GetHalfMaximum("MCW82",xmin,xmax);
c1->cd(7);w.GetHalfMaximum("MCW85",xmin,xmax);
}
