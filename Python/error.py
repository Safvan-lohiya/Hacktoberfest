print('\n'.join([x for i,x in enumerate(dir(_import_('builtins'))) if 'Error' in x]))
