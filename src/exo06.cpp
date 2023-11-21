// MIROIR

// #include <sil/sil.hpp>

// int main()
// {
//     sil::Image image{"images/logo.png"};
//     sil::Image copie{image};/*on crée une copie de l'image pour garder les pixels d'origines!!*/
//     for (int x{0}; x < image.width(); x++)
//     {
//         for (int y{0}; y < image.height(); y++)
//         {
//             if(x<image.width()/2){
//                 image.pixel(x, y)=image.pixel(image.width()-1-x, y);
//             }
//             else if(x>image.width()/2){
//                 image.pixel(x, y)=copie.pixel(image.width()-1-x, y);
//             }
//         }
//     }
//     image.save("output/pouet.png");
// }

//PLUS SIMPLE, on fait direct une copie et on modifie tout avec la copie!
// #include <sil/sil.hpp>

// int main()
// {
//     sil::Image image{"images/logo.png"};
//     sil::Image copie{image};/*on crée une copie de l'image pour garder les pixels d'origines!!*/
//     for (int x{0}; x < image.width(); x++)
//     {
//         for (int y{0}; y < image.height(); y++)
//         {
//            image.pixel(x, y)=copie.pixel(image.width()-1-x, y);
//         }
//     }
//     image.save("output/pouet.png");
// }