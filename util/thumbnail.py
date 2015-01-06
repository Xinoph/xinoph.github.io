#!/bin/env python2.7

# This script creates thumbnail images for all png images in a directory.
# The original size images are renamed to [name]_large.png while the thumbnail
# images are saved as [name].png (the original filename).

from PIL import Image
import os
import sys
import shutil

max_size = 600, 400

path = sys.argv[1] if (len(sys.argv) > 1) else "."

for full_file_name in os.listdir(path):
    file_name, file_ext = os.path.splitext(full_file_name)
    full_file_path = os.path.join(path, full_file_name)

    if file_ext != ".png" or not file_name.endswith("_thumb"): continue

    copy_file_name = file_name + "_thumb.png"
    copy_file_path = os.path.join(path, copy_file_name)

    if os.path.isfile(copy_file_path):
        print "File '%s' already exists, skipping copy." % copy_file_name
    else:
        print "Copying '%s' to '%s'" % (full_file_name, copy_file_name)
        shutil.copyfile(full_file_path, copy_file_path)

    try:
        image = Image.open(copy_file_path)
        if image.size[0] > max_size[0] or image.size[1] > max_size[1]:
            print "Creating thumbnail for '%s'." % copy_file_name
            image.thumbnail(max_size, Image.ANTIALIAS)
            image.save(copy_file_path, "png")
        else:
            print "File '%s' is already thumbnail size." % copy_file_name
    except IOError:
        print "Could not create thumbnail for '%s'." % copy_file_name