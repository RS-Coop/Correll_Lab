
/********************
    activations.h

    Code generated using nn4mc.

    This file defines possible activation functions.

*/

#ifndef __ACTIVATION_H__
#define __ACTIVATION_H__

float activate(float, int, char);

float sigmoid(float);

float softplus(float);

float softsign(float input);

float hard_sigmoid(float input);

float exponential(float input);

float relu(float input);

float hyper_tan(float input);

float softmax(float input, int output_shape);

#endif