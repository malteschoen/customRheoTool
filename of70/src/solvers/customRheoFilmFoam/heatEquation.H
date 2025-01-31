fvScalarMatrix TEqn
    (
        fvm::ddt(T) 
      + fvm::div(phi, T) // Must use bounded scheme, since phi is not conservative
      ==
        2.0*HTC*Tenviron/(rho*Cp*h) 
      - fvm::Sp(2*HTC/(rho*Cp*h), T)
    );
