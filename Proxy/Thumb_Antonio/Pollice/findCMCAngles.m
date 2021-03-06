function [CMC_FE_s,CMC_AA_s] = findCMCAngles(kx,ky,kz)
%FINDCMCANGLES
%    [CMC_FE_S,CMC_AA_S] = FINDCMCANGLES(KX,KY,KZ)

%    This function was generated by the Symbolic Math Toolbox version 8.0.
%    15-Feb-2018 11:11:20

t2 = ky.^2;
t3 = kx.^2;
t4 = kz.^2;
t5 = t2+t3+t4;
t6 = 1.0./sqrt(t5);
CMC_FE_s = asin(ky.*t6);
if nargout > 1
    CMC_AA_s = -asin(kx.*t6.*1.0./sqrt(-t2./t5+1.0));
end
