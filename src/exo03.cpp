// #include <sil/sil.hpp>

// int main()
// {
//     sil::Image image{"images/logo.png"};
   
//     for (glm::vec3& color : image.pixels())
//     {
//         float const niveau_de_gris{(color.r+color.b+color.g)/3};
//         color = glm::vec3{niveau_de_gris, niveau_de_gris, niveau_de_gris};
//     }
//     image.save("output/pouet.png");
// }