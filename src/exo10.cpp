//LUMINOSITE

// #include <sil/sil.hpp>

// int main()
// {
//     sil::Image image{"images/photo.jpg"};
//     sil::Image copie{image.width(),image.height()};
//     for (int x{0}; x < (image.width()); x++)
//     {
//         for (int y{0}; y < image.height(); y++)
//         {
//             /*pour assombrir on fait puissance 1 jusqu'à l'infini*/
//             /*pour éclaircir on fait puissance entre 0 et 1*/
//             image.pixel(x,y).r= pow(image.pixel(x,y).r,2);
//             image.pixel(x,y).g= pow(image.pixel(x,y).g,2);
//             image.pixel(x,y).b= pow(image.pixel(x,y).b,2);
//         }
//     }
//     image.save("output/pouet.png");
// }

