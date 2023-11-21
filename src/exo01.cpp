// #include <sil/sil.hpp>

// int main()
// {
//     sil::Image image{"images/logo.png"};
//     // TODO: modifier l'image en passant sur tous les x et tous les y
//     //for (int x{0}; x < image.width(); x++)
//     // {
//     //     for (int y{0}; y < image.height(); y++)
//     //     {
//     //         image.pixel(x, y).r = 0.f;
//     //     }
//     // }

//     //syntaxe + concise pour itérer sur tous les pixels
//     for (glm::vec3& color : image.pixels())
//     {
//         color.r = 0.f;
//         color.b=0.f;
//     }
//     image.save("output/pouet.png");
// }