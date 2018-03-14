function [y] = print_kinematics(current_points,r2,l_proxi,l_meta)
%UNTITLED2 Summary of this function goes here
%   Detailed explanation goes here
t = current_points(1);
% Solo 3 punti
CMC = current_points(2:4);
a = [0;0;0];
b = current_points(5:8);
c = current_points(9:12);
d = current_points(13:16);
e = current_points(17:20);
f1 = current_points(21:24);
f = current_points(25:28);
g1 = current_points(29:31);
g2 = current_points(32:34);
h = current_points(35:37);
i = current_points(38:41);
j = current_points(42:45);
MCP = current_points(46:49)
K = current_points(50:52);
PIP = current_points(53:55);
K2 = current_points(56:58);
s1 = current_points(59);
l_meta = current_points(60);
s2 = current_points(61);
l_dist = current_points(62);
close all;

%h = [-58, 30.6, 76.14]
figure('rend','painters','pos',[300 300 1000 400]);
subplot(1,3,1);
plot3([a(1) b(1)],[a(2) b(2)],[a(3) b(3)],'r');
hold on;
plot3([b(1) c(1)],[b(2) c(2)],[b(3) c(3)],'r');
plot3([c(1) d(1)],[c(2) d(2)],[c(3) d(3)],'r');
plot3([c(1) f1(1)],[c(2) f1(2)],[c(3) f1(3)],'r');
plot3([f(1) f1(1)],[f(2) f1(2)],[f(3) f1(3)],'r');
plot3([d(1) g1(1)],[d(2) g1(2)],[d(3) g1(3)],'r');
plot3([g2(1) g1(1)],[g2(2) g1(2)],[g2(3) g1(3)],'r');
plot3([h(1) g1(1)],[h(2) g1(2)],[h(3) g1(3)],'r');
plot3([h(1) i(1)],[h(2) i(2)],[h(3) i(3)],'r');
plot3([i(1) j(1)],[i(2) j(2)],[i(3) j(3)],'r');
plot3([j(1) e(1)],[j(2) e(2)],[j(3) e(3)],'b');
plot3([c(1) e(1)],[c(2) e(2)],[c(3) e(3)],'b');
plot3([f(1) K(1)],[f(2) K(2)],[f(3) K(3)],'c');
plot3([CMC(1) K(1)],[CMC(2) K(2)],[CMC(3) K(3)],'y');
plot3([CMC(1) MCP(1)],[CMC(2) MCP(2)],[CMC(3) MCP(3)],'c');
plot3([PIP(1) MCP(1)],[PIP(2) MCP(2)],[PIP(3) MCP(3)],'c');
plot3([PIP(1) K2(1)],[PIP(2) K2(2)],[PIP(3) K2(3)],'c');

axis equal
subplot(1,3,2);
plot([a(2) b(2)],[a(1) b(1)],'r');
hold on;
plot([b(2) c(2)],[b(1) c(1)],'r');
plot([c(2) d(2)],[c(1) d(1)],'r');
plot([c(2) f1(2)],[c(1) f1(1)],'r');
plot([f(2) f1(2)],[f(1) f1(1)],'r');
plot([d(2) g1(2)],[d(1) g1(1)],'r');
plot([g2(2) g1(2)],[g2(1) g1(1)],'r');
plot([h(2) g1(2)],[h(1) g1(1)],'r');
plot([h(2) i(2)],[h(1) i(1)],'r');
plot([i(2) j(2)],[i(1) j(1)],'r');
plot([j(2) e(2)],[j(1) e(1)],'b');
plot([c(2) e(2)],[c(1) e(1)],'b');
plot([f(2) K(2)],[f(1) K(1)],'c');
plot([CMC(2) K(2)],[CMC(1) K(1)],'y');
plot([CMC(2) MCP(2)],[CMC(1) MCP(1)],'c');
plot([PIP(2) MCP(2)],[PIP(1) MCP(1)],'c');
plot([PIP(2) K2(2)],[PIP(1) K2(1)],'c');

axis equal
subplot(1,3,3);
plot([a(1) b(1)],[a(3) b(3)],'r');
hold on;
plot([b(1) c(1)],[b(3) c(3)],'r');
plot([c(1) d(1)],[c(3) d(3)],'r');
plot([c(1) f1(1)],[c(3) f1(3)],'r');
plot([f(1) f1(1)],[f(3) f1(3)],'r');
plot([d(1) g1(1)],[d(3) g1(3)],'r');
plot([g2(1) g1(1)],[g2(3) g1(3)],'r');
plot([h(1) g1(1)],[h(3) g1(3)],'r');
plot([h(1) i(1)],[h(3) i(3)],'r');
plot([i(1) j(1)],[i(3) j(3)],'r');
plot([j(1) e(1)],[j(3) e(3)],'b');
plot([c(1) e(1)],[c(3) e(3)],'b');
plot([f(1) K(1)],[f(3) K(3)],'c');
plot([CMC(1) K(1)],[CMC(3) K(3)],'y');
plot([CMC(1) MCP(1)],[CMC(3) MCP(3)],'c');
plot([PIP(1) MCP(1)],[PIP(3) MCP(3)],'c');
plot([PIP(1) K2(1)],[PIP(3) K2(3)],'c');

axis equal


end

