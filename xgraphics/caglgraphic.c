#include <xdef.h>
xlong XI_STDCALL glcreateCanvas(xlong hwnd, double width, double height){
	
	
	
}

xbool XI_STDCALL gldrawImage(xlong hcanvas, xlong image, xlong dst_rect, xlong src_rect, double rotate, xlong imageMask, xlong rotate_point){
	
	
	
}

void XI_STDCALL glsetMatrix(xlong hcanvas, xlong matrix){
	
	
	
}

void XI_STDCALL glsave(xlong hcanvas){
	
	
	
}

void XI_STDCALL glrestore(xlong hcanvas){
	
	
	
}

xbool XI_STDCALL glprepare(xlong hcanvas){
	
	
	
}

void XI_STDCALL glflush(xlong hcanvas){
	
	
	
}

void XI_STDCALL glscale(xlong hcanvas, double fscale){
	
	
	
}

void XI_STDCALL gltranslate(xlong hcanvas, double cx, double cy){
	
	
	
}

void XI_STDCALL glsetBackColor(xlong hcanvas, xint argb){
	
	
	
}

xint XI_STDCALL glgetBackColor(xlong hcanvas){
	
	
	
}

void XI_STDCALL glsetAntiAliasing(xlong hcanvas, xbool bba){
	
	
	
}

void XI_STDCALL gldrawLine(xlong hcanvas, xlong ptstart, xlong ptend, xint color, double width_pixels){
	
	
	
}

void XI_STDCALL gldot(xlong hcanvas, xlong pt_center, xint color, double width_pixels){
	
	
	
}

void XI_STDCALL gldraw_path(xlong hcanvas, xlong path_path, xptr color, xint color_count, double width_pixels){
	
	
	
}

void XI_STDCALL glpolygon(xlong hcanvas, xlong path_path, xptr color, xint color_count, xint style, double width_pixels){
	
	
	
}

void XI_STDCALL glcircle(xlong hcanvas, xlong pt_point, double x_radius, double y_radius, xint style, xptr color, xint color_count, double width_pixels, xint smooth_level){
	
	
	
}

double XI_STDCALL glmap_x_coord(xlong hcanvas, double x_pos){
	
	
	
}

double XI_STDCALL glmap_y_coord(xlong hcanvas, double y_pos){
	
	
	
}

double XI_STDCALL glmap_width(xlong hcanvas, double w){
	
	
	
}

double XI_STDCALL glmap_height(xlong hcanvas, double h){
	
	
	
}

xlong XI_STDCALL glmap_point(xlong hcanvas, xlong pt_point){
	
	
	
}

xlong XI_STDCALL glmap_size(xlong hcanvas, xlong sz_size){
	
	
	
}

double XI_STDCALL glgetWidth(xlong hcanvas){
	
	
	
}

double XI_STDCALL glgetHeight(xlong hcanvas){
	
	
	
}

void XI_STDCALL gldrawBezier(xlong hcanvas, xlong pt_start_point, xlong pt_start_ctl_point, xlong pt_end_point, xlong pt_end_ctl_point, xptr color, xint color_count, double width_pixels, xint smooth_level){
	
	
	
}

xlong XI_STDCALL glgetGraphicsDevice(xlong hcanvas){
	
	
	
}

xlong XI_STDCALL pt_create(double x, double y){
	
	
	
}

double XI_STDCALL pt_get_x(xlong hpoint){
	
	
	
}

double XI_STDCALL pt_get_y(xlong hpoint){
	
	
	
}

void XI_STDCALL pt_offset(xlong hpoint, double x, double y){
	
	
	
}

void XI_STDCALL pt_offset(xlong hpoint, xlong pt){
	
	
	
}

void XI_STDCALL pt_set(xlong hpoint, double x, double y){
	
	
	
}

xlong XI_STDCALL sz_create(double w, double h){
	
	
	
}

double XI_STDCALL sz_get_w(xlong hsize){
	
	
	
}

double XI_STDCALL sz_get_h(xlong hsize){
	
	
	
}

void XI_STDCALL sz_shrink(xlong hsize, double v){
	
	
	
}

void XI_STDCALL sz_set(xlong hsize, double w, double h){
	
	
	
}

xlong XI_STDCALL path_create(){
	
	
	
}

void XI_STDCALL path_add(xlong hsize, xlong hpt){
	
	
	
}

void XI_STDCALL path_add(xlong hsize, double x, double y){
	
	
	
}

void XI_STDCALL path_offset(xlong hsize, double x, double y){
	
	
	
}

void XI_STDCALL path_set(xlong hsize, xint id, double x, double y){
	
	
	
}

void XI_STDCALL path_insert(xlong hsize, xint id, double x, double y){
	
	
	
}

xint XI_STDCALL path_length(xlong hsize){
	
	
	
}

xlong XI_STDCALL path_get(xlong hsize, xint id){
	
	
	
}

void XI_STDCALL path_remove(xlong hsize, xint id){
	
	
	
}

xlong XI_STDCALL matrix_create(){
	
	
	
}

xlong XI_STDCALL createMatrix(double a, double b, double c, double d, double e, double f){
	
	
	
}

void XI_STDCALL setMatrix(xlong hmatrix, double a, double b, double c, double d, double e, double f){
	
	
	
}

void XI_STDCALL matrix_translate(xlong hmatrix, double tx, double ty){
	
	
	
}

void XI_STDCALL matrix_translate3d(xlong hmatrix, double tx, double ty, double tz){
	
	
	
}

void XI_STDCALL matrix_translateRight(xlong hmatrix, double tx, double ty){
	
	
	
}

void XI_STDCALL matrix_translateRight3d(xlong hmatrix, double tx, double ty, double tz){
	
	
	
}

xbool XI_STDCALL matrix_isIdentity(xlong hmatrix){
	
	
	
}

xlong XI_STDCALL matrix_mapPoint(xlong hmatrix, xlong pthandle){
	
	
	
}

xlong XI_STDCALL matrix_mapRect(xlong hmatrix, xlong ptrect){
	
	
	
}

void XI_STDCALL matrix_rotate(xlong hmatrix, double angle){
	
	
	
}

void XI_STDCALL matrix_scale(xlong hmatrix, double sv){
	
	
	
}

xlong XI_STDCALL rect_create(){
	
	
	
}

xlong XI_STDCALL rect_create4(double l, double t, double r, double b){
	
	
	
}

void XI_STDCALL rect_set(xlong hrect, double l, double t, double r, double b){
	
	
	
}

void XI_STDCALL rect_shrink(xlong hrect, double cx, double cy){
	
	
	
}

xlong XI_STDCALL rect_intersect(xlong hrect, xlong rect){
	
	
	
}

xlong XI_STDCALL rect_union(xlong hrect, xlong rect){
	
	
	
}

xbool XI_STDCALL rect_contains(xlong hrect, double x, double y){
	
	
	
}

double XI_STDCALL rect_get_x(xlong hrect){
	
	
	
}

double XI_STDCALL rect_get_y(xlong hrect){
	
	
	
}

double XI_STDCALL rect_get_width(xlong hrect){
	
	
	
}

double XI_STDCALL rect_get_height(xlong hrect){
	
	
	
}

double XI_STDCALL rect_get_left(xlong hrect){
	
	
	
}

double XI_STDCALL rect_get_top(xlong hrect){
	
	
	
}

double XI_STDCALL rect_get_right(xlong hrect){
	
	
	
}

double XI_STDCALL rect_get_bottom(xlong hrect){
	
	
	
}

xlong XI_STDCALL rect_get_center(xlong hrect){
	
	
	
}

xlong XI_STDCALL image_create_from_bitmap(xlong bitmap){
	
	
	
}

xlong XI_STDCALL image_create_from_data(xptr arg0, xint depth, xint covt, xint width, xint height){
	
	
	
}

xint XI_STDCALL image_get_width(xlong himage){
	
	
	
}

xint XI_STDCALL image_get_height(xlong himage){
	
	
	
}

xlong XI_STDCALL bitmap_create_config(xint width, xint height, xint color){
	
	
	
}

xlong XI_STDCALL bitmap_create_text(xstring Text, xlong size, xlong typeface, xint color, xint style){
	
	
	
}

xlong XI_STDCALL bitmap_create_file(xstring file){
	
	
	
}

xint XI_STDCALL bitmap_getdata(xlong handle, xptr data, xlong len){
	
	
	
}

xint XI_STDCALL image_get_color(xlong himage){
	
	
	
}

xlong XI_STDCALL typeface_fromfile(xstring file){
	
	
	
}

xlong XI_STDCALL typeface_fromdata(xptr ptr, xint len){
	
	
	
}

xint XI_STDCALL typeface_get_glyphs(xlong htypeface){
	
	
	
}

xint XI_STDCALL typeface_get_typefaces(xlong htypeface){
	
	
	
}

xstring XI_STDCALL typeface_get_family(xlong htypeface){
	
	
	
}

xstring XI_STDCALL typeface_get_style(xlong htypeface){
	
	
	
}

xlong XI_STDCALL typeface_measure(xlong htypeface, xstring text, xint width, xint height, xint style){
	
	
	
}

xlong XI_STDCALL colorpath_create(){
	
	
	
}

void XI_STDCALL colorpath_add(xlong hcolor, xint color, double position){
	
	
	
}

void XI_STDCALL colorpath_set(xlong hcolor, xint id, xint color, double position){
	
	
	
}

void XI_STDCALL colorpath_insert(xlong hcolor, xint id, xint color, double position){
	
	
	
}

xint XI_STDCALL colorpath_length(xlong hcolor){
	
	
	
}

xint XI_STDCALL colorpath_get_color(xlong hcolor, xint id){
	
	
	
}

double XI_STDCALL colorpath_get_position(xlong hcolor, xint id){
	
	
	
}

void XI_STDCALL colorpath_remove(xlong hcolor, xint id){
	
	
	
}

