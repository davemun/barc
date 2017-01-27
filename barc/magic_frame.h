//
//  magic_frame.h
//  barc
//
//  Created by Charley Robinson on 1/26/17.
//  Copyright © 2017 TokBox, Inc. All rights reserved.
//

#ifndef magic_frame_h
#define magic_frame_h

#include <stdio.h>

#include <libavutil/frame.h>
#include <MagickWand/MagickWand.h>

int magic_frame_start(MagickWand** dest_wand,
                      size_t width, size_t height);
int magic_frame_add(MagickWand* wand_out,
                    AVFrame* frame_in,
                    size_t x_offset,
                    size_t y_offset,
                    double scale_coeff);
int magic_frame_finish(MagickWand* wand_out, AVFrame* frame_out);

#endif /* magic_frame_h */
