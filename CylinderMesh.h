// This class derives from MeshObject and creates a ID3D11Buffer of
// vertices and indices to represent a canonical cylinder (capped at
// both ends) that is positioned at the origin with a radius of 1.0,
// a height of 1.0 and with its axis in the +Z direction.
#pragma once


#include "MeshObject.h"

ref class CylinderMesh : public MeshObject
{
internal:
    CylinderMesh(_In_ ID3D11Device* device, uint32 segments);
};
