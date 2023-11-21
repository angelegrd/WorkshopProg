// IMAGE BRUITEE

// #include <sil/sil.hpp>
// #include "random.hpp"

// int main()
// {
//     sil::Image image{"images/logo.png"};
//     for (int x{0}; x < image.width(); x++)
//     {
//         for (int y{0}; y < image.height(); y++)
//         {
//             if(random_int(0,100)>70){ /*on prend un nb aléatoire qui n'a rien à voir*/
//             image.pixel(x, y) = glm::vec3{random_float(0,1),random_float(0,1),random_float(0,1)};
//             }
//         }
//     }
//     image.save("output/pouet.png");
// }