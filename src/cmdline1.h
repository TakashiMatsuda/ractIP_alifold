/** @file cmdline1.h
 *  @brief The header file for the command line option parser
 *  generated by GNU Gengetopt version 2.22.6
 *  http://www.gnu.org/software/gengetopt.
 *  DO NOT modify this file, since it can be overwritten
 *  @author GNU Gengetopt by Lorenzo Bettini */

#ifndef CMDLINE1_H
#define CMDLINE1_H

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h> /* for FILE */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef CMDLINE_PARSER_PACKAGE
/** @brief the program name (used for printing errors) */
#define CMDLINE_PARSER_PACKAGE PACKAGE
#endif

#ifndef CMDLINE_PARSER_PACKAGE_NAME
/** @brief the complete program name (used for help and version) */
#ifdef PACKAGE_NAME
#define CMDLINE_PARSER_PACKAGE_NAME PACKAGE_NAME
#else
#define CMDLINE_PARSER_PACKAGE_NAME PACKAGE
#endif
#endif

#ifndef CMDLINE_PARSER_VERSION
/** @brief the program version */
#define CMDLINE_PARSER_VERSION VERSION
#endif

/** @brief Where the command line options are stored */
struct gengetopt_args_info
{
  const char *help_help; /**< @brief Print help and exit help description.  */
  const char *version_help; /**< @brief Print version and exit help description.  */
  float alpha_arg;	/**< @brief  weight for hybridization (default='0.5').  */
  char * alpha_orig;	/**< @brief  weight for hybridization original value given at command line.  */
  const char *alpha_help; /**< @brief  weight for hybridization help description.  */
  float beta_arg;	/**< @brief weight for unpaired bases (default='0.0').  */
  char * beta_orig;	/**< @brief weight for unpaired bases original value given at command line.  */
  const char *beta_help; /**< @brief weight for unpaired bases help description.  */
  float fold_th_arg;	/**< @brief Threshold for base-pairing probabilities (default='0.5').  */
  char * fold_th_orig;	/**< @brief Threshold for base-pairing probabilities original value given at command line.  */
  const char *fold_th_help; /**< @brief Threshold for base-pairing probabilities help description.  */
  float hybridize_th_arg;	/**< @brief Threshold for hybridazation probabilities (default='0.2').  */
  char * hybridize_th_orig;	/**< @brief Threshold for hybridazation probabilities original value given at command line.  */
  const char *hybridize_th_help; /**< @brief Threshold for hybridazation probabilities help description.  */
  float acc_th_arg;	/**< @brief Threshold for accessible probabilities (default='0.0').  */
  char * acc_th_orig;	/**< @brief Threshold for accessible probabilities original value given at command line.  */
  const char *acc_th_help; /**< @brief Threshold for accessible probabilities help description.  */
  int max_w_arg;	/**< @brief Maximum length of accessible regions (default='0').  */
  char * max_w_orig;	/**< @brief Maximum length of accessible regions original value given at command line.  */
  const char *max_w_help; /**< @brief Maximum length of accessible regions help description.  */
  int min_w_arg;	/**< @brief Minimum length of accessible regions (default='0').  */
  char * min_w_orig;	/**< @brief Minimum length of accessible regions original value given at command line.  */
  const char *min_w_help; /**< @brief Minimum length of accessible regions help description.  */
  int zscore_arg;	/**< @brief Calculate z-score via dishuffling (0=no shuffling, 1=1st seq only, 2=2nd seq only, or 12=both) (default='0').  */
  char * zscore_orig;	/**< @brief Calculate z-score via dishuffling (0=no shuffling, 1=1st seq only, 2=2nd seq only, or 12=both) original value given at command line.  */
  const char *zscore_help; /**< @brief Calculate z-score via dishuffling (0=no shuffling, 1=1st seq only, 2=2nd seq only, or 12=both) help description.  */
  int num_shuffling_arg;	/**< @brief The number of shuffling (default='1000').  */
  char * num_shuffling_orig;	/**< @brief The number of shuffling original value given at command line.  */
  const char *num_shuffling_help; /**< @brief The number of shuffling help description.  */
  int seed_arg;	/**< @brief Seed for random number generator (default='0').  */
  char * seed_orig;	/**< @brief Seed for random number generator original value given at command line.  */
  const char *seed_help; /**< @brief Seed for random number generator help description.  */
  int mccaskill_flag;	/**< @brief Use McCaskill model for folding (default=off).  */
  const char *mccaskill_help; /**< @brief Use McCaskill model for folding help description.  */
  int allow_iosolated_flag;	/**< @brief Allow isolated base-pairs (default=off).  */
  const char *allow_iosolated_help; /**< @brief Allow isolated base-pairs help description.  */
  int show_energy_flag;	/**< @brief calculate the free energy of the predicted joint structure (default=off).  */
  const char *show_energy_help; /**< @brief calculate the free energy of the predicted joint structure help description.  */
  char * param_file_arg;	/**< @brief Read the energy parameter file for Vienna RNA package.  */
  char * param_file_orig;	/**< @brief Read the energy parameter file for Vienna RNA package original value given at command line.  */
  const char *param_file_help; /**< @brief Read the energy parameter file for Vienna RNA package help description.  */
  int no_pk_flag;	/**< @brief do not use the constraints for interenal pseudoknots (default=off).  */
  const char *no_pk_help; /**< @brief do not use the constraints for interenal pseudoknots help description.  */
  char * rip_arg;	/**< @brief Import posterior probabilities from the result of RIP.  */
  char * rip_orig;	/**< @brief Import posterior probabilities from the result of RIP original value given at command line.  */
  const char *rip_help; /**< @brief Import posterior probabilities from the result of RIP help description.  */
  float mix_weight_arg;	/**< @brief mixture weights of inference engines (default='0.5').  */
  char * mix_weight_orig;	/**< @brief mixture weights of inference engines original value given at command line.  */
  const char *mix_weight_help; /**< @brief mixture weights of inference engines help description.  */
  char * engineX_arg;	/**< @brief specify the inference engine for independent sequence (default='McCaskilll').  */
  char * engineX_orig;	/**< @brief specify the inference engine for independent sequence original value given at command line.  */
  const char *engineX_help; /**< @brief specify the inference engine for independent sequence help description.  */
  char * engineA_arg;	/**< @brief specify the inference engine for independent Alignment (default='Alifold').  */
  char * engineA_orig;	/**< @brief specify the inference engine for independent Alignment original value given at command line.  */
  const char *engineA_help; /**< @brief specify the inference engine for independent Alignment help description.  */
  
  unsigned int help_given ;	/**< @brief Whether help was given.  */
  unsigned int version_given ;	/**< @brief Whether version was given.  */
  unsigned int alpha_given ;	/**< @brief Whether alpha was given.  */
  unsigned int beta_given ;	/**< @brief Whether beta was given.  */
  unsigned int fold_th_given ;	/**< @brief Whether fold-th was given.  */
  unsigned int hybridize_th_given ;	/**< @brief Whether hybridize-th was given.  */
  unsigned int acc_th_given ;	/**< @brief Whether acc-th was given.  */
  unsigned int max_w_given ;	/**< @brief Whether max-w was given.  */
  unsigned int min_w_given ;	/**< @brief Whether min-w was given.  */
  unsigned int zscore_given ;	/**< @brief Whether zscore was given.  */
  unsigned int num_shuffling_given ;	/**< @brief Whether num-shuffling was given.  */
  unsigned int seed_given ;	/**< @brief Whether seed was given.  */
  unsigned int mccaskill_given ;	/**< @brief Whether mccaskill was given.  */
  unsigned int allow_iosolated_given ;	/**< @brief Whether allow-iosolated was given.  */
  unsigned int show_energy_given ;	/**< @brief Whether show-energy was given.  */
  unsigned int param_file_given ;	/**< @brief Whether param-file was given.  */
  unsigned int no_pk_given ;	/**< @brief Whether no-pk was given.  */
  unsigned int rip_given ;	/**< @brief Whether rip was given.  */
  unsigned int mix_weight_given ;	/**< @brief Whether mix-weight was given.  */
  unsigned int engineX_given ;	/**< @brief Whether engineX was given.  */
  unsigned int engineA_given ;	/**< @brief Whether engineA was given.  */

  char **inputs ; /**< @brief unamed options (options without names) */
  unsigned inputs_num ; /**< @brief unamed options number */
} ;

/** @brief The additional parameters to pass to parser functions */
struct cmdline_parser_params
{
  int override; /**< @brief whether to override possibly already present options (default 0) */
  int initialize; /**< @brief whether to initialize the option structure gengetopt_args_info (default 1) */
  int check_required; /**< @brief whether to check that all required options were provided (default 1) */
  int check_ambiguity; /**< @brief whether to check for options already specified in the option structure gengetopt_args_info (default 0) */
  int print_errors; /**< @brief whether getopt_long should print an error message for a bad option (default 1) */
} ;

/** @brief the purpose string of the program */
extern const char *gengetopt_args_info_purpose;
/** @brief the usage string of the program */
extern const char *gengetopt_args_info_usage;
/** @brief the description string of the program */
extern const char *gengetopt_args_info_description;
/** @brief all the lines making the help output */
extern const char *gengetopt_args_info_help[];

/**
 * The command line parser
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser (int argc, char **argv,
  struct gengetopt_args_info *args_info);

/**
 * The command line parser (version with additional parameters - deprecated)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param override whether to override possibly already present options
 * @param initialize whether to initialize the option structure my_args_info
 * @param check_required whether to check that all required options were provided
 * @return 0 if everything went fine, NON 0 if an error took place
 * @deprecated use cmdline_parser_ext() instead
 */
int cmdline_parser2 (int argc, char **argv,
  struct gengetopt_args_info *args_info,
  int override, int initialize, int check_required);

/**
 * The command line parser (version with additional parameters)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param params additional parameters for the parser
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_ext (int argc, char **argv,
  struct gengetopt_args_info *args_info,
  struct cmdline_parser_params *params);

/**
 * Save the contents of the option struct into an already open FILE stream.
 * @param outfile the stream where to dump options
 * @param args_info the option struct to dump
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_dump(FILE *outfile,
  struct gengetopt_args_info *args_info);

/**
 * Save the contents of the option struct into a (text) file.
 * This file can be read by the config file parser (if generated by gengetopt)
 * @param filename the file where to save
 * @param args_info the option struct to save
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_file_save(const char *filename,
  struct gengetopt_args_info *args_info);

/**
 * Print the help
 */
void cmdline_parser_print_help(void);
/**
 * Print the version
 */
void cmdline_parser_print_version(void);

/**
 * Initializes all the fields a cmdline_parser_params structure 
 * to their default values
 * @param params the structure to initialize
 */
void cmdline_parser_params_init(struct cmdline_parser_params *params);

/**
 * Allocates dynamically a cmdline_parser_params structure and initializes
 * all its fields to their default values
 * @return the created and initialized cmdline_parser_params structure
 */
struct cmdline_parser_params *cmdline_parser_params_create(void);

/**
 * Initializes the passed gengetopt_args_info structure's fields
 * (also set default values for options that have a default)
 * @param args_info the structure to initialize
 */
void cmdline_parser_init (struct gengetopt_args_info *args_info);
/**
 * Deallocates the string fields of the gengetopt_args_info structure
 * (but does not deallocate the structure itself)
 * @param args_info the structure to deallocate
 */
void cmdline_parser_free (struct gengetopt_args_info *args_info);

/**
 * Checks that all the required options were specified
 * @param args_info the structure to check
 * @param prog_name the name of the program that will be used to print
 *   possible errors
 * @return
 */
int cmdline_parser_required (struct gengetopt_args_info *args_info,
  const char *prog_name);


#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* CMDLINE1_H */
