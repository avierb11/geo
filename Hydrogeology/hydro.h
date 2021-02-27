// Flow in 1D
void _flow1D(float *heads, float *queue, float *conductivity, float timeDelta, float scale, int length);

// Controller for flow in 1D
void flow1D(float *heads, float *queue, float *conductivity, float timeDelta, float scale, int length, int iters)

// General adding, can be used in 1,2, or 3D
void add(float *heads, float *queue, int length)
