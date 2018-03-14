function F = findF(l_dist,l_meta,r2,xCMC,xG1,xG2,xK,xMCP,xPIP,yCMC,yG1,yG2,yK,yMCP,yPIP,zCMC,zG1,zG2,zK,zMCP,zPIP)
%FINDF
%    F = FINDF(L_DIST,L_META,R2,XCMC,XG1,XG2,XK,XMCP,XPIP,YCMC,YG1,YG2,YK,YMCP,YPIP,ZCMC,ZG1,ZG2,ZK,ZMCP,ZPIP)

%    This function was generated by the Symbolic Math Toolbox version 8.0.
%    15-Feb-2018 16:32:19

t2 = xG1.*yMCP.*zG2;
t3 = xG2.*yG1.*zMCP;
t4 = xMCP.*yG2.*zG1;
t5 = xG2-xPIP;
t6 = xK-xPIP;
t7 = yG2-yPIP;
t8 = yK-yPIP;
t9 = zG2-zPIP;
t10 = zK-zPIP;
t11 = xG2-xK;
t12 = yG2-yK;
t13 = zG2-zK;
t14 = r2.^2;
t15 = t6.^2;
t16 = t8.^2;
t17 = t10.^2;
t18 = xCMC-xPIP;
t19 = yCMC-yPIP;
t20 = zCMC-zPIP;
t22 = l_meta.^2;
t26 = l_dist.^2;
t21 = -t22-t26+t18.^2+t19.^2+t20.^2;
t23 = xK-xMCP;
t24 = yK-yMCP;
t25 = zK-zMCP;
t27 = t15+t16+t17+t26-t23.^2-t24.^2-t25.^2;
t28 = xMCP-xPIP;
t29 = yMCP-yPIP;
t30 = zMCP-zPIP;
F = [t2+t3+t4-xG1.*yG2.*zMCP-xG2.*yMCP.*zG1-xMCP.*yG1.*zG2+xG1.*yG2.*zPIP-xG1.*yPIP.*zG2-xG2.*yG1.*zPIP+xG2.*yPIP.*zG1+xPIP.*yG1.*zG2-xPIP.*yG2.*zG1-xG1.*yMCP.*zPIP+xG1.*yPIP.*zMCP+xMCP.*yG1.*zPIP-xMCP.*yPIP.*zG1-xPIP.*yG1.*zMCP+xPIP.*yMCP.*zG1+xG2.*yMCP.*zPIP-xG2.*yPIP.*zMCP-xMCP.*yG2.*zPIP+xMCP.*yPIP.*zG2+xPIP.*yG2.*zMCP-xPIP.*yMCP.*zG2;t2+t3+t4+xG1.*yG2.*zK-xG1.*yK.*zG2-xG2.*yG1.*zK+xG2.*yK.*zG1+xK.*yG1.*zG2-xK.*yG2.*zG1-xG1.*yG2.*zMCP-xG2.*yMCP.*zG1-xMCP.*yG1.*zG2+xG1.*yK.*zMCP-xG1.*yMCP.*zK-xK.*yG1.*zMCP+xK.*yMCP.*zG1+xMCP.*yG1.*zK-xMCP.*yK.*zG1-xG2.*yK.*zMCP+xG2.*yMCP.*zK+xK.*yG2.*zMCP-xK.*yMCP.*zG2-xMCP.*yG2.*zK+xMCP.*yK.*zG2;t14+t15+t16+t17-t5.^2-t7.^2-t9.^2;-t14+t11.^2+t12.^2+t13.^2;t22.*t27.^2-t21.^2.*(t15+t16+t17);-t26+t28.^2+t29.^2+t30.^2];
