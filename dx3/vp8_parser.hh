#ifndef VP8_PARSER_HH
#define VP8_PARSER_HH

#include <vector>

#include "chunk.hh"
#include "bool_decoder.hh"

#include "display.hh"

class VP8Parser
{
private:
  uint16_t width_, height_;

public:
  VP8Parser( uint16_t s_width, uint16_t s_height );

  void parse_frame( const Chunk & frame, VideoDisplay & display );

  unsigned int raster_width( void ) const;
  unsigned int raster_height( void ) const;
};

#endif /* VP8_PARSER_HH */
