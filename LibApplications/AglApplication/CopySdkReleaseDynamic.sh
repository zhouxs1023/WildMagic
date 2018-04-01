#!/bin/tcsh
cd ${SRCROOT}
set HEADERS = `ls ../*.h ../*.inl`
foreach header (${HEADERS})
    cp -fp "${SRCROOT}"/$header ../../SDK/Include
end

cp -fp "${BUILT_PRODUCTS_DIR}"/libWm5AglApplication.dylib ../../SDK/Library/ReleaseDLL/libWm5AglApplication.dylib
