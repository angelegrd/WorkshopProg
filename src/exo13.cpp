//ROSACE

// #include <sil/sil.hpp>

// void createCircle(sil::Image &image, float &rayon, float &epaisseur, int &x, int &y, int &xCenter, int &yCenter)
// {
//     float const distance { glm::distance(
//                 glm::vec2{x, y},            /*position d'1 pt random*/
//                 glm::vec2{xCenter,yCenter}  /*position du centre*/
//             )};
//             if (distance>rayon-epaisseur && distance<rayon){
//             image.pixel(x,y)=glm::vec3{1.f};
//             }
// }

// int main()
// {
//     sil::Image image{500/*width*/, 500/*height*/};
//     float rayon{100};
//     float epaisseur{9};
//     int xCenter{image.width()/2};
//     int yCenter{image.height()/2};
//     for (int x{0}; x < (image.width()); x++)
//     {
//         for (int y{0}; y < image.height(); y++)
//         {
//             createCircle(image, rayon, epaisseur, x, y, xCenter, yCenter);
//             for(int i{1}; i<=6; i++)
//             {
//                 int newCenterx(xCenter+rayon*cos((3.14)/3*i));
//                 int newCentery(yCenter+rayon*sin((3.14)/3*i));
//                 createCircle(image, rayon, epaisseur, x, y, newCenterx, newCentery);
//             }
//         }
//     }
//     image.save("output/pouet.png");
// }
