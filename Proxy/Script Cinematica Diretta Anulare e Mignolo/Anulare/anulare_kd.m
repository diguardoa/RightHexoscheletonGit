function [qo1_s,qo2_s] = anulare_kd(LAB,LBC,LBH,LCD,LCI,LDE,LEF,LEJ,LGF,LGH,LIIp,LKB,LKNx,LKNy,LLM,lact,lx,offset,qB,xL_mag)
%ANULARE_KD
%    [QO1_S,QO2_S] = ANULARE_KD(LAB,LBC,LBH,LCD,LCI,LDE,LEF,LEJ,LGF,LGH,LIIP,LKB,LKNX,LKNY,LLM,LACT,LX,OFFSET,QB,XL_MAG)

%    This function was generated by the Symbolic Math Toolbox version 8.0.
%    29-Jan-2018 17:33:01

t2 = LKB.^2;
t3 = cos(qB);
t4 = LAB.^2;
t10 = LAB.*LKB.*t3.*2.0;
t5 = t2+t4-t10;
t6 = 1.0./sqrt(t5);
t7 = lact+lx;
t8 = LKNx.^2;
t9 = LKNy.^2;
t11 = 1.0./LKB;
t12 = t2.*2.0;
t13 = t8+t9;
t14 = 1.0./sqrt(t13);
t15 = t7.^2;
t16 = t2+t4+t8+t9-t10-t15;
t17 = t6.*t14.*t16.*(1.0./2.0);
t18 = acos(t17);
t19 = 1.0./LKNx;
t20 = LKNy.*t19;
t21 = atan(t20);
t22 = t10-t12;
t25 = t6.*t11.*t22.*(1.0./2.0);
t23 = acos(-t25);
t24 = qB+t18+t21+t23;
t26 = cos(t24);
t27 = sin(t24);
t28 = t18+t21+t23;
t29 = LBC.*t26;
t37 = cos(t28);
t38 = LKB.*t37;
t39 = LCI.*t27;
t30 = t29+t38-t39+xL_mag;
t31 = sin(t28);
t32 = LKB.*t31;
t33 = LCI.*t26;
t34 = LBC.*t27;
t35 = offset+t32+t33+t34;
t36 = LIIp+2.7e1./2.0;
t40 = t30.^2;
t41 = t35.^2;
t42 = t36.^2;
t44 = LBH+LKB;
t47 = LGH.*t31;
t48 = LCD.*t26;
t49 = t37.*t44;
t43 = t29+t38+t47+t48-t49;
t51 = LGH.*t37;
t52 = LCD.*t27;
t53 = t31.*t44;
t45 = t32+t34-t51+t52-t53;
t46 = LDE+LEF;
t50 = t43.^2;
t54 = t45.^2;
t55 = t29+t38+t48-t49;
t56 = t32+t34+t52-t53;
t57 = t50+t54;
t58 = 1.0./sqrt(t57);
t59 = t55.^2;
t60 = t56.^2;
t61 = t59+t60;
t62 = 1.0./sqrt(t61);
t63 = LBC+LCD;
t64 = 1.0./t46;
t65 = t46.^2;
t66 = LGF.^2;
t67 = t50+t54+t65-t66;
t68 = t58.*t64.*t67.*(1.0./2.0);
t69 = acos(t68);
t70 = LGH.^2;
t71 = t50+t54+t59+t60-t70;
t72 = t58.*t62.*t71.*(1.0./2.0);
t73 = acos(t72);
t74 = 1.0./t63;
t75 = t63.^2;
t76 = LBH.^2;
t77 = t59+t60+t75-t76;
t78 = t62.*t74.*t77.*(1.0./2.0);
t79 = acos(t78);
t80 = qB+t18+t21+t23+t69+t73+t79;
t81 = cos(t80);
t82 = sin(t80);
t83 = 1.0./t30;
t84 = t35.*t83;
t85 = atan(t84);
t86 = t40+t41;
t87 = 1.0./sqrt(t86);
t88 = t40.*2.0;
t89 = t41.*2.0;
t95 = t42.*2.0;
t90 = t88+t89-t95;
t91 = t40+t41-t42;
t92 = 1.0./sqrt(t91);
t93 = t87.*t90.*t92.*(1.0./2.0);
t94 = acos(t93);
qo1_s = t94+atan(t35./(t29+xL_mag-LCI.*t27+LKB.*cos(t18+t21+acos(t6.*t11.*(t12-LAB.*LKB.*t3.*2.0).*(1.0./2.0)))));
if nargout > 1
    t96 = t85+t94;
    t97 = sin(t96);
    t102 = LEJ.*t81;
    t103 = LDE.*t82;
    t104 = LLM.*t97;
    t98 = offset+t32+t34+t52-t102-t103+t104;
    t99 = LDE.*t81;
    t100 = cos(t96);
    t106 = LEJ.*t82;
    t107 = LLM.*t100;
    t101 = t29+t38+t48-t99+t106+t107+xL_mag;
    t105 = t98.^2;
    t108 = t101.^2;
    qo2_s = -t85-t94+angle(offset.*-1i-t29-t38-t48+t99-xL_mag-LBC.*t27.*1i-LCD.*t27.*1i+LDE.*t82.*1i+LEJ.*t81.*1i-LEJ.*t82-LKB.*t31.*1i-LLM.*t97.*1i-LLM.*t100)+acos(1.0./sqrt(t105+t108).*1.0./sqrt(-t42+t105+t108).*(-t95+t105.*2.0+t108.*2.0).*(1.0./2.0));
end
