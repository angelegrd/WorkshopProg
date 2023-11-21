//RGB SPLIT

// #include <sil/sil.hpp>

// int main()
// {
//     sil::Image image{"images/logo.png"};
//     sil::Image copie{image.width(),image.height()};
//     for (int x{0}; x < (image.width()); x++)
//     {
//         for (int y{0}; y < image.height(); y++)
//         {
//             if (x>29){
//                 copie.pixel(x,y).r=image.pixel(x-29,y).r;
//             }

//             copie.pixel(x,y).g=image.pixel(x,y).g;

//             if(x<(image.width()-29)){
//                 copie.pixel(x,y).b=image.pixel(x+29,y).b;
//             }
//         }
//     }
//     copie.save("output/pouet.png");
// }