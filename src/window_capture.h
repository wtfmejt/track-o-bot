#pragma once

#include <QPixmap>

class WindowCapture
{
public:
  virtual ~WindowCapture() {}

  virtual int GetWidth() = 0;
  virtual int GetHeight() = 0;

  virtual QPixmap Capture(int x, int y, int w = 0, int h = 0) = 0;
};

