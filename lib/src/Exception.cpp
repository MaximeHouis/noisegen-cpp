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

#include "Exception.hpp"

noisegen::Exception::Exception(const char *what) : m_what{what}
{
}

noisegen::Exception::Exception(std::string_view what) : m_what{what}
{
}

noisegen::Exception::Exception(std::string what) : m_what{std::move(what)}
{
}

const char *noisegen::Exception::what() const noexcept
{
    return m_what.c_str();
}

noisegen::ArgumentParseException::ArgumentParseException(const char *what) : Exception(what)
{
}

noisegen::ArgumentParseException::ArgumentParseException(std::string_view what) : Exception(what)
{
}

noisegen::ArgumentParseException::ArgumentParseException(std::string what) : Exception(std::move(what))
{
}
