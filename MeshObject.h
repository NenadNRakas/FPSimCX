// This class is the generic (abstract) representation of D3D11 Indexed triangle
// list.  Each of the derived classes is just the constructor for the specific
// geometry primitive.  This abstract class does not place any requirements on
// the format of the geometry directly.
// The primary method of the MeshObject is Render.  The default implementation
// just sets the IndexBuffer, VertexBuffer and topology to a TriangleList and
// makes a  DrawIndexed call on the context.  It assumes all other state has
// already been set on the context.
#pragma once


ref class MeshObject abstract
{
internal:
    MeshObject();

    virtual void Render(_In_ ID3D11DeviceContext* context);

protected private:
    Microsoft::WRL::ComPtr<ID3D11Buffer>  m_vertexBuffer;
    Microsoft::WRL::ComPtr<ID3D11Buffer>  m_indexBuffer;
    int                                   m_vertexCount;
    int                                   m_indexCount;
};
