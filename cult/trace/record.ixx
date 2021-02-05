// file      : cult/trace/record.ixx
// author    : Boris Kolpackov <boris@kolpackov.net>
// copyright : Copyright (c) 2005-2010 Boris Kolpackov
// license   : GNU GPL v2 + exceptions; see accompanying LICENSE file

namespace Cult
{
  namespace Trace
  {
    inline
    Record::
    Record (Char const* id, Int level)
        : id_ (id), level_ (level), sbuf_ (buf_, sizeof (buf_)), os_ (&sbuf_)
    {
    }

    inline
    Char const* Record::
    text () const
    {
      return buf_;
    }

    inline
    Char const* Record::
    id () const
    {
      return id_;
    }

    inline
    Int Record::
    level () const
    {
      return level_;
    }

    inline
    Void Record::
    level (Int level)
    {
      level_ = level;
    }
  }
}
