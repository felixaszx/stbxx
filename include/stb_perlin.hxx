#ifndef INCLUDE_STB_PERLIN_HXX
#define INCLUDE_STB_PERLIN_HXX

#include <array>

namespace stb
{
    struct perlin_noise_generator
    {
        std::array<float, 3> coord_ = {};

        float //
        noise [[nodiscard]] (std::array<int, 3> wrap = {0, 0, 0}) noexcept;

        float                          //
        noise [[nodiscard]] (int seed, //
                             std::array<float, 3> wrap = {0, 0, 0}) noexcept;

        float                                        //
        ridge_noise [[nodiscard]] (float lacunarity, //
                                   float gain,
                                   float offset,
                                   int octaves) noexcept;

        float                                      //
        fbm_noise [[nodiscard]] (float lacunarity, //
                                 float gain,
                                 int octaves) noexcept;

        float                                             //
        turbulence_noise [[nodiscard]] (float lacunarity, //
                                        float gain,
                                        int octaves) noexcept;
    };
}; // namespace stb

#endif // INCLUDE_STB_PERLIN_HXX
