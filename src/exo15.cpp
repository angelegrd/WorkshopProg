//MOSAIQUE INVERSEE

// #include <sil/sil.hpp>

// int main()
// {
//     sil::Image image{"images/logo.png"};
//     sil::Image mosaique{5*image.width(), 5*image.height()}; /*on veut une mosaique de 5x5*/

//     for (int x{0}; x < (mosaique.width()); x++)
//     {
//         for (int y{0}; y < mosaique.height(); y++)
//         {
//             if (x % ( image.width() * 2 ) < image.width()){
//                 if (y%(image.height()*2)<image.height()){
//                     mosaique.pixel(x,y)=image.pixel(x % image.width() , y % image.height()); /*normale bg*/
//                 }
//                 else{
//                     mosaique.pixel(x,y)=image.pixel(x % image.width(), image.height() - 1 - (y%image.height())); /*inversée sur y hg*/
//                 }
//             }
//             else{
//                 if (y%(image.height()*2)<image.height()){
//                     mosaique.pixel(x,y)=image.pixel(image.width() - 1 - (x % image.width()) , y % image.height()); /*inversée sur x bd*/
//                 }
//                 else{
//                     mosaique.pixel(x,y)=image.pixel(image.width() - 1 - (x % image.width()), image.height() - 1 - (y%image.height())); /*inversée sur x et y hd*/
//                 }
//            }   
//         }
//     }
//     mosaique.save("output/pouet.png");
// }