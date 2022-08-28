#include "ConstantBuffers.hlsli"

float4 main(PixelShaderFlatInput input) : SV_Target
{
    return diffuseTexture.Sample(linearSampler, input.textureUV) * input.diffuseColor;
}
