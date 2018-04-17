import numpy as np
import matplotlib.pyplot as plt

dataP=np.genfromtxt("tray.txt",delimiter=" ")




plt.figure(figsize=(18,9))
plt.plot(dataP[:,0],dataP[:,2],label='x vs t', c='b')
plt.title('x vs t')
plt.xlabel('$t(s)$')
plt.ylabel('$x(m)$')
plt.grid()
plt.legend()
plt.savefig("pos.pdf")

plt.figure(figsize=(18,9))
plt.plot(dataP[:,1],dataP[:,2],label='v vs t', c='b')
plt.title('v vs t')
plt.xlabel('$t(s)$')
plt.ylabel('$v (m/s)$')
plt.grid()
plt.legend()
plt.savefig("vel.pdf")

plt.figure(figsize=(18,9))
plt.plot(dataP[:,1],dataP[:,0],label='v vs x', c='b')
plt.title('v vs x')
plt.xlabel('$m (m/s)$')
plt.ylabel('$x (m)$')
plt.grid()
plt.legend()
plt.savefig("phase.pdf")

