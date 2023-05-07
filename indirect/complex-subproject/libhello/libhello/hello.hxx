#pragma once

#include <iosfwd>
#include <string>

#include <libhello/export.hxx>

namespace hello
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  LIBHELLO_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
