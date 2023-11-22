//MOSAIQUE

// #include <sil/sil.hpp>

// int main()
// {
//     sil::Image image{"images/logo.png"};
//     sil::Image mosaique{5*image.width(), 5*image.height()}; /*on veut une mosaique de 5x5*/

//     for (int x{0}; x < (mosaique.width()); x++)
//     {
//         for (int y{0}; y < mosaique.height(); y++)
//         {
//            mosaique.pixel(x,y)=image.pixel(x%image.width(),y%image.height());           
//         }
//     }
//     mosaique.save("output/pouet.png");
// }