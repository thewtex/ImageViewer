//--------------------------------------------
//
//		  Project Gaussian Filter
//
//		  Author:  Luis Ibanez
//	
//     Division of Neurosugery
//     Department of Surgery
//     University of North Carolina
//     Chapel Hill, NC 27599
//
//--------------------------------------------

#ifndef liFILTERCONSOLE
#define liFILTERCONSOLE

#include <fltkImageViewer.h>
#include <liFilterConsoleGUI.h>



class liFilterConsole : public liFilterConsoleGUI {

public:
  typedef unsigned char  OverlayPixelType;
  
  typedef fltk::ImageViewer< PixelType,
                       OverlayPixelType > ImageViewerType;

  typedef fltk::ImageViewer< InputPixelType,     
                       OverlayPixelType > InputImageViewerType;

public:
  liFilterConsole();
  virtual ~liFilterConsole();
  virtual void Show(void);
  virtual void Hide(void);
  virtual void Load(void);
  virtual void Quit(void);
  virtual void ShowProgress(float);
  virtual void ShowStatus(const char * text);
  virtual void ShowInput(void);
  virtual void ShowFilteredX(void);
  virtual void ShowFilteredY(void);
  virtual void ShowFilteredZ(void);
  virtual void ShowSecondDerivativeX(void);
  virtual void ShowSecondDerivativeY(void);
  virtual void ShowSecondDerivativeZ(void);
  virtual void ShowLaplacian(void);
  virtual void ShowGradientModulus(void);
  virtual void ShowAbout(void);
  virtual void Execute(void);
  virtual void WriteLaplacian(void);
  virtual void WriteGradientX(void);
  virtual void WriteGradientY(void);
  virtual void WriteGradientZ(void);
  virtual void WriteGradientModulus(void);

private:

  InputImageViewerType           * m_InputViewer;

  ImageViewerType           * m_Viewer_H1x;
  ImageViewerType           * m_Viewer_H1y;
  ImageViewerType           * m_Viewer_H1z;

  ImageViewerType           * m_Viewer_H2x;
  ImageViewerType           * m_Viewer_H2y;
  ImageViewerType           * m_Viewer_H2z;

  ImageViewerType           * m_Viewer_Laplacian;

  ImageViewerType           * m_Viewer_Gradient_Modulus;

};



#endif
