// Flow in 1D
void _flow1D(float *heads, float *queue, float *conductivity, float timeDelta, float scale, int length)
{
    for (int i = 1; i < length - 1; i++)
    {
        queue[i] += ((conductivity[i]*timeDelta)/scale)*(heads[i + 1] - heads[i]);
        queue[i] += ((conductivity[i]*timeDelta)/scale)*(heads[i - 1] - heads[i]);
    }

    queue[0] += ((conductivity[i]*timeDelta)/scale)*(heads[1] - heads[0]);
    queue[length-1] += ((conductivity[i]*timeDelta)/scale)*(heads[length-2] - heads[length-1]);
}

// Controller for flow in 1D
void flow1D(float *heads, float *queue, float *conductivity, float timeDelta, float scale, int length, int iters)
{
    for (int i = 0; i < iters; i++)
    {
        _flow1D(heads, queue, conductivity, timeDelta, scale, length);
        add(heads,queue,length);
    }
}

// Flow in 2D
void _flow2D(float *heads, float *queue, float *conductivity, float timeDelta, float scale, int length, int stride)
{
    
}

// Controller for flow in 2D

// General adding, can be used in 1,2, or 3D
void add(float *heads, float *queue, int length)
{
    for (int i = 0; i < length; i++)
    {
        heads[i] += queue[i];
        queue[i] = 0.0;
    }
}
