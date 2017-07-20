/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ZoomList.h
 * Author: mafuz
 *
 * Created on July 19, 2017, 7:02 PM
 */

#ifndef ZOOMLIST_H
#define ZOOMLIST_H
#include <vector>
#include <utility>
#include "Zoom.h"

using namespace std;
namespace MH{
class ZoomList {
private:
    double m_xCenter{0};
    double m_yCenter{0};
    double m_scale{1.00};
    int m_width{0};
    int m_height{0};
    vector<Zoom> zooms;
public:
    
    ZoomList(int width,int height);
    void add(const Zoom& zoom);
    pair<double,double>doZoom(int x,int y);

};
}
#endif /* ZOOMLIST_H */

