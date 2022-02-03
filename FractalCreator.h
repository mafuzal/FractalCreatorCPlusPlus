#ifndef FRACTALCREATOR_H
#define FRACTALCREATOR_H
#include <string>
#include "Zoom.h"
#include <memory>
#include "Mandelbrot.h"
#include "Bitmap.h"
#include "ZoomList.h"
#include "RGB.h"
#include <vector>
using namespace std;
namespace MH{
class FractalCreator {
private:
    int m_width;
    int m_height;
    unique_ptr<int[]> m_histogram;
    unique_ptr<int[]> m_fractal;
     Bitmap m_bitmap;
      ZoomList m_zoomList;
      int m_total{0};
      vector<int> m_ranges;
      vector<RGB>m_colors;
      vector<int>m_rangeTotals;
      bool m_bGotFirstRange{false};
public:
    FractalCreator(int width,int height);
    virtual ~FractalCreator();
  private:
    void calculateIteration();
    void calculateTotalIterations();
    void drawFractal();
    void calculateRangeTotals();
    void writeBitmap(string name);
    
public:
    void run(string name);
    void addZoom(const Zoom& zoom);
    void addRange(double rangeEnd, const RGB& rgb);
    int getRange(int iterations) const;

};
}

#endif /* FRACTALCREATOR_H */

