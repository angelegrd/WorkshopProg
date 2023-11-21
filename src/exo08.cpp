// ROTATION 90°

// #include <sil/sil.hpp>


// int main()
// {
//     sil::Image image{"images/logo.png"};
//     sil::Image copie{image.height(),image.width()};
//     for (int x{0}; x < image.width(); x++)
//     {
//         for (int y{0}; y < image.height(); y++)
//         {
//             copie.pixel(image.height()-1-y,x)=image.pixel(x,y);

//             //ou copie.pixel(y,x)=image.pixel(x,y) et on fait le miroir
//         }
//     }
//     copie.save("output/pouet.png");
// }