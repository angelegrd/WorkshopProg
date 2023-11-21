// #include <sil/sil.hpp>


// int main()
// {
//     sil::Image image{300/*width*/, 200/*height*/};
//     for (int x{0}; x < image.width(); x++)
//     {
//         for (int y{0}; y < image.height(); y++)
//         {
//             image.pixel(x, y) =  glm::vec3{x / 300.f};
            
//             // while(x<image.width())       NON PADUTOU
//             // {
//             // image.pixel(x, y).r += 0.2;
//             // image.pixel(x, y).g += 0.2;
//             // image.pixel(x, y).b += 0.2;
//             // }
//         }
//     }
    
//     image.save("output/pouet.png");
// }