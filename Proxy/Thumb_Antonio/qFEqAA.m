function [qFE, qAA] = getAngles(kx, ky, kz,CMC)
[val, where] = min(kz);
ky = ky(where);
kx = kx(where);
kz = kz(where);
ky = ky(1);
kx = kx(1);
kz = kz(1);
%% Traslo il sistema di riferimento
kx = kx - CMC(1);
ky = ky - CMC(2);
kz = kz - CMC(3);

%% qFE and qAA from K and CMC
temp = acos(abs(kz)/(kx^2 + ky^2 + kz^2)^(1/2));
if kz > 0 
    qFE = temp;
else
    qFE = -temp;
    
 qAA = 2*atan((ky + (kx^2 + ky^2)^(1/2))/kx);% + 2*pi*l
end
