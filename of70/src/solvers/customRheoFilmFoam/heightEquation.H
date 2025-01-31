fvScalarMatrix hEqn
  (
     fvm::ddt(h)
   + fvm::div(phi, h)
  );

  hEqn.relax(); 
  hEqn.solve();    
