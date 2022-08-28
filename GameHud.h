#pragma once

// GameHud:
// This class maintains the resources necessary to draw the Heads Up Display, which is a
// 2D overlay on top of the main 3D graphics generated for the game.
// The GameHud Render method expects to be called within the context of a D2D BeginDraw
// and makes D2D drawing calls to draw the text elements on the window.

#include "FPSim.h"
#include "BasicDirectX.h"

ref class FPSim;

ref class GameHud
{
internal:
    GameHud(
        _In_ const std::shared_ptr<DX::DeviceResources>& deviceResources,
        _In_ Platform::String^ titleHeader,
        _In_ Platform::String^ titleBody
    );

    void CreateDeviceDependentResources();
    void CreateWindowSizeDependentResources();
    void ReleaseDeviceDependentResources();
    void Render(_In_ FPSim^ game);

private:
    // Cached pointer to device resources.
    std::shared_ptr<DX::DeviceResources>                m_deviceResources;

    Microsoft::WRL::ComPtr<ID2D1SolidColorBrush>        m_textBrush;
    Microsoft::WRL::ComPtr<IDWriteTextFormat>           m_textFormatBody;
    Microsoft::WRL::ComPtr<IDWriteTextFormat>           m_textFormatBodySymbol;

    Microsoft::WRL::ComPtr<IDWriteTextFormat>           m_textFormatTitleHeader;
    Microsoft::WRL::ComPtr<IDWriteTextFormat>           m_textFormatTitleBody;
    Microsoft::WRL::ComPtr<ID2D1Bitmap>                 m_logoBitmap;
    Microsoft::WRL::ComPtr<IDWriteTextLayout>           m_titleHeaderLayout;
    Microsoft::WRL::ComPtr<IDWriteTextLayout>           m_titleBodyLayout;

    bool                                                m_showTitle;
    Platform::String^ m_titleHeader;
    Platform::String^ m_titleBody;

    float                                               m_titleBodyVerticalOffset;
    D2D1_SIZE_F                                         m_logoSize;
    D2D1_SIZE_F                                         m_maxTitleSize;
};
