// CONVULTIONS

// #include <sil/sil.hpp>


// // void blur(Image &image, int &x, int &y)
// // {

// // }
// int main()
// {
//     sil::Image image{"images/logo.png"};
//     sil::Image copie{image};

//     for (int x{0}; x < (image.width()); x++)
//     {
//         for (int y{0}; y < image.height(); y++)
//         {

//             if(x<image.width()-2 && x>2 && y<image.height()-2 && y>2){
//                 image.pixel(x,y).r=((copie.pixel(x-1,y+1).r+copie.pixel(x,y+1).r+copie.pixel(x+1,y+1).r+copie.pixel(x-1,y).r+copie.pixel(x,y).r+copie.pixel(x+1,y).r+copie.pixel(x-1,y-1).r+copie.pixel(x,y-1).r+copie.pixel(x+1,y-1).r)/9);
//                 image.pixel(x,y).g=((copie.pixel(x-1,y+1).g+copie.pixel(x,y+1).g+copie.pixel(x+1,y+1).g+copie.pixel(x-1,y).g+copie.pixel(x,y).g+copie.pixel(x+1,y).g+copie.pixel(x-1,y-1).g+copie.pixel(x,y-1).g+copie.pixel(x+1,y-1).g)/9);
//                 image.pixel(x,y).b=((copie.pixel(x-1,y+1).b+copie.pixel(x,y+1).b+copie.pixel(x+1,y+1).b+copie.pixel(x-1,y).b+copie.pixel(x,y).b+copie.pixel(x+1,y).b+copie.pixel(x-1,y-1).b+copie.pixel(x,y-1).b+copie.pixel(x+1,y-1).b)/9);
//             }
//         }
//     }
//     image.save("output/pouet.png");
// }