package com.tachyon.zeta.tests

import com.google.inject.Inject
import com.tachyon.zeta.zeta.Model
import org.eclipse.xtext.testing.InjectWith
import org.eclipse.xtext.testing.extensions.InjectionExtension
import org.eclipse.xtext.testing.util.ParseHelper
import org.junit.jupiter.api.Assertions
import org.junit.jupiter.api.Test
import org.junit.jupiter.api.^extension.ExtendWith

@ExtendWith(InjectionExtension)
@InjectWith(ZetaInjectorProvider)
class DeclarationTests {
    @Inject
    ParseHelper<Model> parseHelper

    @Test
    def void testImport() {
        val result = parseHelper.parse('''
            use libc(*)
            use libc(printf)
            use libc(printf, scanf)
        ''')
        Assertions.assertNotNull(result)
        val errors = result.eResource.errors
        Assertions.assertTrue(errors.isEmpty, '''Unexpected errors: «errors.join(", ")»''')
    }
}
