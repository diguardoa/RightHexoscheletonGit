function J = findJ(CMC_AA,CMC_FE,MCP_AA,MCP_FE,PIP_FE,l_dist,l_proxi,xG1,xG2,xK,xMCP,xPIP,yG1,yG2,yK,yMCP,yPIP,zG1,zG2,zK,zMCP,zPIP)
%FINDJ
%    J = FINDJ(CMC_AA,CMC_FE,MCP_AA,MCP_FE,PIP_FE,L_DIST,L_PROXI,XG1,XG2,XK,XMCP,XPIP,YG1,YG2,YK,YMCP,YPIP,ZG1,ZG2,ZK,ZMCP,ZPIP)

%    This function was generated by the Symbolic Math Toolbox version 8.0.
%    15-Feb-2018 10:20:04

t2 = yG1.*zG2;
t3 = yMCP.*zG1;
t4 = yG2.*zMCP;
t5 = t2+t3+t4-yG2.*zG1-yG1.*zMCP-yMCP.*zG2;
t6 = xG2.*zG1;
t7 = xG1.*zMCP;
t8 = xMCP.*zG2;
t9 = t6+t7+t8-xG1.*zG2-xMCP.*zG1-xG2.*zMCP;
t10 = xG1.*yG2;
t11 = xMCP.*yG1;
t12 = xG2.*yMCP;
t13 = t10+t11+t12-xG2.*yG1-xG1.*yMCP-xMCP.*yG2;
t14 = xK.*2.0;
t15 = yK.*2.0;
t16 = zK.*2.0;
t17 = xG2.*2.0;
t18 = yG2.*2.0;
t19 = zG2.*2.0;
t20 = xK-xMCP;
t21 = yK-yMCP;
t22 = zK-zMCP;
t23 = cos(PIP_FE);
t24 = t20.^2;
t25 = t21.^2;
t26 = t22.^2;
t27 = t24+t25+t26;
t28 = l_proxi.*t27;
t29 = 1.0./sqrt(t28);
t30 = xPIP.*2.0;
t31 = yPIP.*2.0;
t32 = zPIP.*2.0;
t33 = cos(CMC_AA);
t34 = t33.*6.123233995736766e-17;
t35 = sin(CMC_AA);
t36 = t35.*3.749399456654644e-33;
t37 = t34+t36;
t38 = cos(CMC_FE);
t39 = sin(CMC_FE);
t40 = t34-t35;
t41 = cos(MCP_AA);
t42 = t37.*t39;
t50 = t38.*t40;
t43 = t42-t50;
t44 = sin(MCP_AA);
t45 = t35.*6.123233995736766e-17;
t46 = t37.*t38.*6.123233995736766e-17;
t47 = t39.*t40.*6.123233995736766e-17;
t48 = t33+t45+t46+t47;
t49 = sin(MCP_FE);
t51 = cos(MCP_FE);
t52 = t33.*2.295845021658468e-49;
t53 = -t36+t52+1.0;
t54 = t37.*t38;
t55 = t39.*t53;
t56 = t54+t55;
t57 = t37.*t39.*6.123233995736766e-17;
t59 = t33.*3.749399456654644e-33;
t60 = t38.*t53.*6.123233995736766e-17;
t58 = t45+t57-t59-t60+6.123233995736766e-17;
J = reshape([0.0,t5,t14-xPIP.*2.0,t14-t17,t30-xMCP.*2.0+l_proxi.*t23.*t29.*(t14-xMCP.*2.0),0.0,0.0,0.0,0.0,0.0,t9,t15-yPIP.*2.0,t15-t18,t31-yMCP.*2.0+l_proxi.*t23.*t29.*(t15-yMCP.*2.0),0.0,0.0,0.0,0.0,0.0,t13,t16-zPIP.*2.0,t16-t19,t32-zMCP.*2.0+l_proxi.*t23.*t29.*(t16-zMCP.*2.0),0.0,0.0,0.0,0.0,t5,0.0,-t14+t17,0.0,t14-t30,t30-xMCP.*2.0,0.0,1.0,0.0,t9,0.0,-t15+t18,0.0,t15-t31,t31-yMCP.*2.0,0.0,0.0,1.0,t13,0.0,-t16+t19,0.0,t16-t32,t32-zMCP.*2.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,sqrt(t28).*sin(PIP_FE).*-2.0,0.0,1.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-1.0,-l_dist.*t51.*(t34+t36-t37.*t38-t39.*t40+t43.*t44.*6.123233995736766e-17-t41.*t48.*6.123233995736766e-17)-l_dist.*t49.*(t41.*t43+t44.*t48),l_dist.*t49.*(t41.*t56-t44.*t58)+l_dist.*t51.*(-t36+t42+t52-t38.*t53+t41.*t58.*6.123233995736766e-17+t44.*t56.*6.123233995736766e-17-3.749399456654644e-33),0.0,0.0,0.0,0.0,0.0,0.0,0.0,-l_dist.*t51.*(t43.*t44-t41.*t48)-l_dist.*t49.*(t41.*t43.*6.123233995736766e-17+t44.*t48.*6.123233995736766e-17),l_dist.*t51.*(t41.*t58+t44.*t56)+l_dist.*t49.*(t41.*t56.*6.123233995736766e-17-t44.*t58.*6.123233995736766e-17)],[9,9]);
