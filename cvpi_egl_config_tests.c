#ifndef CVPI_EGL_CONFIG_TESTS
#include "cvpi_egl_config_tests.h"
#endif

/* int test_cvpi_egl_settings_width(void) { */
/* } */
/* int test_cvpi_egl_settings_width_check(void) { */
/* } */
/* int test_cvpi_egl_settings_height(void) { */
/* } */
/* int test_cvpi_egl_settings_height_check(void) { */
/* } */
/* int test_cvpi_egl_settings_pixel_format_brcm_check(void) { */
/* } */
/* int test_cvpi_egl_settings_pixel_format_brcm(void) { */
/* } */
/* int test_cvpi_egl_surface_functions_check(void) { */
/* } */
/* int test_cvpi_egl_settings_buffer_size_check(void) { */
/* } */
/* int test_cvpi_egl_settings_buffer_size(void) { */
/* } */
/* int test_cvpi_egl_settings_red_size_check(void) { */
/* } */
/* int test_cvpi_egl_settings_red_size(void) { */
/* } */
/* int test_cvpi_egl_settings_green_size_check(void) { */
/* } */
/* int test_cvpi_egl_settings_green_size(void) { */
/* } */
/* int test_cvpi_egl_settings_blue_size_check(void) { */
/* } */
/* int test_cvpi_egl_settings_blue_size(void) { */
/* } */
/* int test_cvpi_egl_settings_alpha_size_check(void) { */
/* } */
/* int test_cvpi_egl_settings_alpha_size(void) { */
/* } */
/* int test_cvpi_egl_settings_alpha_mask_size_check(void) { */
/* } */
/* int test_cvpi_egl_settings_alpha_mask_size(void) { */
/* } */
/* int test_cvpi_egl_settings_config_id_check(void) { */
/* } */
/* int test_cvpi_egl_settings_config_id(void) { */
/* } */
/* int test_cvpi_egl_settings_conformant_type_check(void) { */
/* } */
/* int test_cvpi_egl_settings_conformant_type(void) { */
/* } */
/* int test_cvpi_egl_settings_depth_size_check(void) { */
/* } */
/* int test_cvpi_egl_settings_depth_size(void) { */
/* } */
/* int test_cvpi_egl_settings_max_pbuffer_width_check(void) { */
/* } */
/* int test_cvpi_egl_settings_max_pbuffer_height_check(void) { */
/* } */
/* int test_cvpi_egl_settings_max_pbuffer_pixels_check(void) { */
/* } */
/* int test_cvpi_egl_settings_match_native_pixmap_check(void) { */
/* } */
/* int test_cvpi_egl_settings_max_swap_interval_check(void) { */
/* } */
/* int test_cvpi_egl_settings_max_swap_interval(void) { */
/* } */
/* int test_cvpi_egl_settings_min_swap_interval_check(void) { */
/* } */
/* int test_cvpi_egl_settings_min_swap_interval(void) { */
/* } */
/* int test_cvpi_egl_settings_renderable_type_check(void) { */
/* } */
/* int test_cvpi_egl_settings_renderable_type(void) { */
/* } */
/* int test_cvpi_egl_settings_stencil_size_check(void) { */
/* } */
/* int test_cvpi_egl_settings_stencil_size(void) { */
/* } */
/* int test_cvpi_egl_settings_surface_type_check(void) { */
/* } */
/* int test_cvpi_egl_settings_surface_type(void) { */
/* } */
/* int test_cvpi_egl_settings_transparent_red_value_check(void) { */
/* } */
/* int test_cvpi_egl_settings_transparent_red_value(void) { */
/* } */
/* int test_cvpi_egl_settings_transparent_green_value_check(void) { */
/* } */
/* int test_cvpi_egl_settings_transparent_green_value(void) { */
/* } */
/* int test_cvpi_egl_settings_transparent_blue_value_check(void) { */
/* } */
/* int test_cvpi_egl_settings_transparent_blue_value(void) { */
/* } */
int test_cvpi_egl_settings_create(void) {
  cvpi_egl_settings settings = cvpi_egl_settings_create();
  int check = cvpi_egl_settings_check(settings);
  free(settings);
  return check;
}
int test_cvpi_egl_instance_setup_takedown(void) {
  cvpi_egl_settings settings = cvpi_egl_settings_create();
  cvpi_egl_instance instance = cvpi_egl_instance_setup(settings);
  int passed1 = NULL != instance;
  cvpi_egl_instance_takedown(instance);
  int passed2 = NULL == instance;

  if(!passed1) {
    fprintf(stderr,"Instance was not set up.\n",)
  }
  if(!passed2) {
    fprintf(stderr,"Instance was not taken down correctly.\n",)
  }
  return passed1 && passed2;
}