/*
 * Copyright (c) 2021-2021 [fill name later]
 *
 * This software is provided "as-is", without any express or implied warranty. In no event
 *     will the authors be held liable for any damages arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose, including commercial
 *     applications, and to alter it and redistribute it freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not claim that you
 *     wrote the original software. If you use this software in a product, an acknowledgment
 *     in the product documentation would be appreciated but is not required.
 *
 * 2. Altered source versions must be plainly marked as such, and must not be misrepresented
 * as being the original software.
 *
 * 3. This notice may not be removed or altered from any source distribution.
 */

#pragma once

#include <cstdint>
#include <ostream>

namespace pengen {
struct Settings
{
    uint32_t width{};
    uint32_t height{};

    uint32_t octaves{8};
    double persistence{0.5};

    uint32_t count{1};

    bool bDryRun{false};
    bool bUseKenPerlinPermutations{false};
    std::string outputFile{"output.pgm"};

    // Utility functions

    [[nodiscard]] std::string toString() const;
};

std::ostream &operator<<(std::ostream &os, const pengen::Settings &settings);
}  // namespace pengen
