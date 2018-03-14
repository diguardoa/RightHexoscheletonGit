%% Trova coefficienti direttori piano
syms X Y Z
syms xH yH zH xD yD zD xI yI zI xG2 yG2 zG2

matr2 = [X - xH, Y - yH, Z - zH; ...
        xD - xH, yD - yH, zD - zH; ...
        xG2 - xH, yG2 - yH, zG2 - zH];
    
eq1 = det(matr2) == 0;
collect(eq1,[X Y Z])

a = (yD*zG2 - yG2*zD - yD*zH + yH*zD + yG2*zH - yH*zG2)
b = (xG2*zD - xD*zG2 + xD*zH - xH*zD - xG2*zH + xH*zG2)
c = (xD*yG2 - xG2*yD - xD*yH + xH*yD + xG2*yH - xH*yG2)