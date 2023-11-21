//DISQUE
// #include <sil/sil.hpp>

// int main()
// {
//     sil::Image image{500/*width*/, 500/*height*/};
//     for (int x{0}; x < (image.width()); x++)
//     {
//         for (int y{0}; y < image.height(); y++)
//         {
//             /*cercle de centre (a,b) au centre de l'image*/
//             /*etre dans le disque = etre à moins de R depuis le centre*/
//             float const distance { glm::distance(
//                 glm::vec2{x, y},                             /*position d'1 pt random*/
//                 glm::vec2{image.width()/2,image.height()/2}  /*position du centre*/
//             )};

//             if (distance<100.f){
//             image.pixel(x,y)=glm::vec3{1.f};
//             }
//         }
//     }
//     image.save("output/pouet.png");
// }
