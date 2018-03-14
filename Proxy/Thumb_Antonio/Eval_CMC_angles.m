function [qo1, qo2] = Eval_CMC_angles(CMC, K)

%% Evaluation of CMC angles, in case of its axes are parallel in z and x reference axes
% I can project the K, CMC points in the xy reference plane
% NOTA: you must be sure that the reference system has the xy plane
% parallel to the sagittal hand plane

CMCx = CMC(1);
CMCy = CMC(2);
CMCz = CMC(3);
Kx = K(1);
Ky = K(2);
Kz = K(3);

[val, where] = min(Ky);
Ky = Ky(where);
Kx = Kx(where);
Kz = Kz(where);

% Angle qo1 is positive iff the thumb gose in opposition
qo1 = atan( (Ky-CMCy) / (Kx-CMCx) );

qo2 = atan( (Kz-CMCz) / (Kx-CMCx) );
end