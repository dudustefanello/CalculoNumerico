#define epson 0.0001

// #define ordem 3
// double matriz[ordem][ordem] = {15,  2, -1,
//                                 2, 12,  1,
//                                 1,  2,  8 },
//        independentes[ordem] = { -200,
//                                 -250,
//                                   30 },
//         coeficientes[ordem] = { 0,  0,  0 },
//        coeficientes2[ordem] = { 0,  0,  0 };
//        char varnomes[ordem] = {'x','y','z'};

#define ordem 3
double matriz[ordem][ordem] = {10, 2,  1,
                                1, 5,  1,
                                2, 3, 10 },
       independentes[ordem] = {  7,
                                -8,
                                 6 },
        coeficientes[ordem] = { 0,  0,  0 },
       coeficientes2[ordem] = { 0,  0,  0 };
       char varnomes[ordem] = {'x','y','z'};
