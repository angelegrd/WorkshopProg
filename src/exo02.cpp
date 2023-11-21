// #include <sil/sil.hpp>

// AVEC UNE VARIABLE DE STOCKAGE

// int main()
// {
//     sil::Image image{"images/logo.png"};
   
//     for (glm::vec3& color : image.pixels())
//     {
//         float red;
//         red=color.r;
//         color.r=color.b;
//         color.b=red;
//     }
//     image.save("output/pouet.png");
// }

//AVEC SWAP

// #include <sil/sil.hpp>

// int main()
// {
//     sil::Image image{"images/logo.png"};
   
//     for (glm::vec3& color : image.pixels())
//     {
//         std::swap(color.r,color.b);
//     }
//     image.save("output/pouet.png");
// }